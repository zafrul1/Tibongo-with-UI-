#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>
#include "Spielstein.h"
#include "Aufgabe.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   //ui
   this->setObjectName("self");
   this->setStyleSheet("#self {background-image: url(:/bilder/hintergrund.png)}");


    ui->label_eingaben->setText("Eingabe");
    ui->label_punkte->setText("Punkte");
    ui->label_restzeit->setText("Restzeit");

    ui->lcdNumber_eingaben->setSegmentStyle(QLCDNumber::Filled);
    ui->lcdNumber_punkte->setSegmentStyle(QLCDNumber::Filled);
    ui->lcdNumber_zeit->setSegmentStyle(QLCDNumber::Filled);


//Stein
        Spielstein* stein_1 = new Spielstein(1);
        stein_1->position.setX(CONFIGURATION::SPIELFELD_STEIN1_X);
        stein_1->position.setY(CONFIGURATION::SPIELFELD_STEIN1_Y);


        Spielstein* stein_2 = new Spielstein(8);
        stein_2->position.setX(CONFIGURATION::SPIELFELD_STEIN2_X);
        stein_2->position.setY(CONFIGURATION::SPIELFELD_STEIN2_Y);


        Spielstein* stein_3 = new Spielstein(9);
        stein_3->position.setX(CONFIGURATION::SPIELFELD_STEIN3_X);
        stein_3->position.setY(CONFIGURATION::SPIELFELD_STEIN3_Y);

        Spielstein* stein_4 = new Spielstein(11);
        stein_4->position.setX(CONFIGURATION::SPIELFELD_LOESUNG_X);
        stein_4->position.setY(CONFIGURATION::SPIELFELD_LOESUNG_Y);

        Aufgabe* aktuelleraufgabe = new Aufgabe(stein_1, stein_2, stein_3, stein_4);


    //Zeichne Legende
    QGraphicsScene* legende_blocks = new QGraphicsScene(0,0,398,150);

    QGraphicsRectItem* terminal_lb [13][4];

    int x_lb = 30;
    int y_lb = 30;
    for (int x = 0; x<13;x++){
        for(int y=0;y<4;y++){

            terminal_lb[x][y] = new QGraphicsRectItem (2+x*x_lb,0+y*y_lb,30,30);;
                    terminal_lb[x][y] ->setBrush(Qt::white);
                    terminal_lb[x][y]->setPen(QPen(Qt::black));
                    legende_blocks->addItem(terminal_lb [x][y]);

        }
    }
    ui->graphicsView_Spielsteine->setScene(legende_blocks);

    auto zeichneLegende = [=](bool visible){

        for (unsigned int i = 0; i < aktuelleraufgabe->steine.size(); i++){
             for(unsigned int j=0; j<aktuelleraufgabe->getSpielstein(i)->felder[0][0].size();j++){

                aktuelleraufgabe->getSpielstein(i)->position.setX((i+2) * 3);
                aktuelleraufgabe->getSpielstein(i)->position.setY(2);

                int x = aktuelleraufgabe->getSpielstein(i)->position.getX() + aktuelleraufgabe->getSpielstein(i)->felder[0][0].at(j).getX();
                int y = aktuelleraufgabe->getSpielstein(i)->position.getY() + aktuelleraufgabe->getSpielstein(i)->felder[0][0].at(j).getY();

                if(visible){

                    terminal_lb[x][y] ->setBrush(Cursor::QtFarbwandler(aktuelleraufgabe->getSpielstein(i)->getfarbe()));
                    terminal_lb[x][y]->setPen(QPen(Qt::black));
                    legende_blocks->addItem(terminal_lb [x][y]);


                }
                else{

                    terminal_lb[x][y] ->setBrush(Qt::white);
                    terminal_lb[x][y]->setPen(QPen(Qt::black));
                    legende_blocks->addItem(terminal_lb [x][y]);
                }

               }

        }

        ui->graphicsView_Spielsteine->setScene(legende_blocks);

            aktuelleraufgabe->getSpielstein(0)->position.setX(CONFIGURATION::SPIELFELD_STEIN1_X);
            aktuelleraufgabe->getSpielstein(0)->position.setY(CONFIGURATION::SPIELFELD_STEIN1_Y);

            aktuelleraufgabe->getSpielstein(1)->position.setX(CONFIGURATION::SPIELFELD_STEIN2_X);
            aktuelleraufgabe->getSpielstein(1)->position.setY(CONFIGURATION::SPIELFELD_STEIN2_Y);

            aktuelleraufgabe->getSpielstein(2)->position.setX(CONFIGURATION::SPIELFELD_STEIN3_X);
            aktuelleraufgabe->getSpielstein(2)->position.setY(CONFIGURATION::SPIELFELD_STEIN3_Y);


    };


    //Zeichne Block
    QGraphicsScene* blocks = new QGraphicsScene(0,0,498,498);

        QGraphicsRectItem* terminal_b [16][16];

        int x_b = 30;
        int y_b = 30;
        for (int x = 0; x<16;x++){
            for(int y=0;y<16;y++){

                terminal_b[x][y] = new QGraphicsRectItem (8+x*x_b,6+y*y_b,30,30);;
                        terminal_b[x][y] ->setBrush(Qt::white);
                        terminal_b[x][y]->setPen(QPen(Qt::black));
                        blocks->addItem(terminal_b [x][y]);

            }
        }

        ui->graphicsView_Spielfeld->setScene(blocks);


    auto zeichneStein = [=](Spielstein* stein_ptr, bool visible){


             for(unsigned int j=0; j<stein_ptr->felder[0][0].size();j++){

                int x = stein_ptr->position.getX() + stein_ptr->felder[0][0].at(j).getX();
                int y = stein_ptr->position.getY() + stein_ptr->felder[0][0].at(j).getY();

                if(visible){

                    terminal_b[x][y] ->setBrush(Cursor::QtFarbwandler(stein_ptr->getfarbe()));
                    terminal_b[x][y]->setPen(QPen(Qt::black));
                    legende_blocks->addItem(terminal_b [x][y]);

                }
                else{

                    terminal_b[x][y] ->setBrush(Qt::white);
                    terminal_b[x][y]->setPen(QPen(Qt::black));
                    legende_blocks->addItem(terminal_b [x][y]);
                }

               }
    };




    auto zeichneAufgabe = [=](bool visible){


    zeichneStein(aktuelleraufgabe->getSpielstein(3),visible);

    for(unsigned int i = 0; i < aktuelleraufgabe->steine.size()-1; i++){

        zeichneStein(aktuelleraufgabe->getSpielstein(i),visible);

    }
    };


    auto geloest = [=](){

         bool visible;

        if (aktuelleraufgabe->getSpielstein(3)->innerhalb(aktuelleraufgabe->getSpielstein(0)->position) &&
                aktuelleraufgabe->getSpielstein(3)->innerhalb(aktuelleraufgabe->getSpielstein(1)->position) &&
                aktuelleraufgabe->getSpielstein(3)->innerhalb(aktuelleraufgabe->getSpielstein(2)->position)) {

                visible = true;
            }
        else {
                visible = false;
        }

        zeichneLegende(visible); //neu aufgabe
        zeichneAufgabe(visible);



    };

    auto bewegen = [=](int richtung){


        zeichneAufgabe(false);
        aktuelleraufgabe->getSpielstein(aktuelleraufgabe->aktiverSpielstein)->bewegen(richtung);
        geloest();



    };

    //Push Button
    connect(ui->pushButton_drehen_rechts,&QPushButton::clicked,zeichneAufgabe);
    connect(ui->pushButton_drehen_links,&QPushButton::clicked,zeichneAufgabe);
    connect(ui->pushButton_bewegen_rechts,&QPushButton::clicked,zeichneAufgabe);
    connect(ui->pushButton_bewegen_links,&QPushButton::clicked,zeichneAufgabe);
    connect(ui->pushButton_bewegen_hoch,&QPushButton::clicked,zeichneAufgabe);
    connect(ui->pushButton_bewegen_runter,&QPushButton::clicked,zeichneAufgabe);
    connect(ui->pushButton_flip,&QPushButton::clicked,zeichneAufgabe);
    connect(ui->pushButton_reset,&QPushButton::clicked,geloest);


    //Radio Button
    if(ui->radioButton_stein1->isChecked()){

        aktuelleraufgabe->aktiverSpielstein = 0;

    }
    else if (ui->radioButton_stein2->isChecked()){

        aktuelleraufgabe->aktiverSpielstein = 1;

    }
    else if (ui->radioButton_stein3->isChecked()){

        aktuelleraufgabe->aktiverSpielstein = 2;

    }




}
MainWindow::~MainWindow()
{
    delete ui;
}






