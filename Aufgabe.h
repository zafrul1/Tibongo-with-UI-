#ifndef AUFGABE
#define AUFGABE
#include <iostream>
#include<vector>
#include"Spielstein.h"
#include"Quadrupel.h"


class Aufgabe {

private:
    std::vector<Spielstein*>steine;

public:

    int aktiverSpielstein = 0;
    friend class MainWindow;
    void intSchwer();
    friend class Spiel;
    Spielstein* loesung_ptr;
    Spielstein* getSpielstein(unsigned int index);
    bool geloest();
    void zeichne();
    void loesche();
    Aufgabe(Spielstein* stein1_ptr, Spielstein* stein2_ptr, Spielstein* stein3_ptr, Spielstein* loesung_ptr);
    Aufgabe() {};
};
#endif
