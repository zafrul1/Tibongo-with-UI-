#include "Spielstein.h"

void Spielstein::init() {
    //IHR CODE / TEILVORLAGE
    switch (typ)
    {
    case SPIELSTEIN_Z2:
    {
        name = "Z2";
        farbe = HINTERGRUND_BLAU;
        felder[0][0].push_back(Position(2, 0));//__#_
        felder[0][0].push_back(Position(1, 1));//_##_
        felder[0][0].push_back(Position(2, 1));//_#__
        felder[0][0].push_back(Position(1, 2));//____

        felder[0][1].push_back(Position(1, 1));//____
        felder[0][1].push_back(Position(2, 1));//_##_
        felder[0][1].push_back(Position(2, 2));//__##
        felder[0][1].push_back(Position(3, 2));//____

        felder[0][2].push_back(Position(2, 0));//__#_
        felder[0][2].push_back(Position(1, 1));//_##_
        felder[0][2].push_back(Position(2, 1));//_#__
        felder[0][2].push_back(Position(1, 2));//____

        felder[0][3].push_back(Position(1, 1));//____
        felder[0][3].push_back(Position(2, 1));//_##_
        felder[0][3].push_back(Position(2, 2));//__##
        felder[0][3].push_back(Position(3, 2));//____

        felder[1][0].push_back(Position(1, 0));//_#__
        felder[1][0].push_back(Position(1, 1));//_##_
        felder[1][0].push_back(Position(2, 1));//__#_
        felder[1][0].push_back(Position(2, 2));//____

        felder[1][1].push_back(Position(2, 1));//____
        felder[1][1].push_back(Position(3, 1));//__##
        felder[1][1].push_back(Position(1, 2));//_##_
        felder[1][1].push_back(Position(2, 2));//____

        felder[1][2].push_back(Position(1, 0));//_#__
        felder[1][2].push_back(Position(1, 1));//_##_
        felder[1][2].push_back(Position(2, 1));//__#_
        felder[1][2].push_back(Position(2, 2));//____

        felder[1][3].push_back(Position(2, 1));//____
        felder[1][3].push_back(Position(3, 1));//__##
        felder[1][3].push_back(Position(1, 2));//_##_
        felder[1][3].push_back(Position(2, 2));//____
        break;
    }
    case SPIELSTEIN_Z3:
    {
        name = "Z3";
        farbe = HINTERGRUND_HELL_BLAU;
        felder[0][0].push_back(Position(2, 0));//__#_
        felder[0][0].push_back(Position(0, 1));//###_
        felder[0][0].push_back(Position(1, 1));//#___
        felder[0][0].push_back(Position(2, 1));//____
        felder[0][0].push_back(Position(0, 2));//____


        felder[0][1].push_back(Position(1, 1));//____
        felder[0][1].push_back(Position(2, 1));//_##_
        felder[0][1].push_back(Position(2, 2));//__#_
        felder[0][1].push_back(Position(2, 3));//__##
        felder[0][1].push_back(Position(3, 3));//____

        felder[0][2].push_back(Position(2, 0));//__#_
        felder[0][2].push_back(Position(0, 1));//###_
        felder[0][2].push_back(Position(1, 1));//#___
        felder[0][2].push_back(Position(2, 1));//____
        felder[0][2].push_back(Position(0, 2));//____

        felder[0][3].push_back(Position(1, 1));//____
        felder[0][3].push_back(Position(2, 1));//_##_
        felder[0][3].push_back(Position(2, 2));//__#_
        felder[0][3].push_back(Position(2, 3));//__##
        felder[0][3].push_back(Position(3, 3));//____

        felder[1][0].push_back(Position(1, 0));//_#__
        felder[1][0].push_back(Position(1, 1));//_###
        felder[1][0].push_back(Position(2, 1));//___#
        felder[1][0].push_back(Position(3, 1));//____
        felder[1][0].push_back(Position(3, 2));//____

        felder[1][1].push_back(Position(2, 1));//____
        felder[1][1].push_back(Position(3, 1));//__##
        felder[1][1].push_back(Position(2, 2));//__#_
        felder[1][1].push_back(Position(2, 3));//_##_
        felder[1][1].push_back(Position(1, 3));//____

        felder[1][2].push_back(Position(1, 0));//_#__
        felder[1][2].push_back(Position(1, 1));//_###
        felder[1][2].push_back(Position(2, 1));//___#
        felder[1][2].push_back(Position(3, 1));//____
        felder[1][2].push_back(Position(3, 2));//____

        felder[1][3].push_back(Position(2, 1));//____
        felder[1][3].push_back(Position(3, 1));//__##
        felder[1][3].push_back(Position(2, 2));//__#_
        felder[1][3].push_back(Position(2, 3));//_##_
        felder[1][3].push_back(Position(1, 3));//____

        break;
    }
    case SPIELSTEIN_L2:
    {
        name = "L2";
        farbe = HINTERGRUND_CYAN;
        felder[0][0].push_back(Position(1, 0));
        felder[0][0].push_back(Position(0, 1));//#_
        felder[0][0].push_back(Position(1, 1));//##__

        felder[0][1].push_back(Position(0, 0));
        felder[0][1].push_back(Position(0, 1));//#_
        felder[0][1].push_back(Position(1, 1));//##__

        felder[0][2].push_back(Position(0, 0));
        felder[0][2].push_back(Position(1, 0));//##__
        felder[0][2].push_back(Position(0, 1));//#_

        felder[0][3].push_back(Position(0, 0));
        felder[0][3].push_back(Position(1, 0));//##__
        felder[0][3].push_back(Position(0, 1));//#_

        felder[1][0].push_back(Position(0, 0));
        felder[1][0].push_back(Position(0, 1));//#_
        felder[1][0].push_back(Position(1, 1));//##__

        felder[1][1].push_back(Position(0, 0));
        felder[1][1].push_back(Position(1, 0));//##__
        felder[1][1].push_back(Position(0, 1));//#_

        felder[1][2].push_back(Position(0, 0));
        felder[1][2].push_back(Position(1, 0));//##__
        felder[1][2].push_back(Position(0, 1));//#_

        felder[1][3].push_back(Position(1, 0));
        felder[1][3].push_back(Position(0, 1));//#_
        felder[1][3].push_back(Position(1, 1));//##__

        break;
    }
    case SPIELSTEIN_L3:
    {
        name = "L3";
        farbe = HINTERGRUND_HELL_GRUEN;
        felder[0][0].push_back(Position(1, 0));
        felder[0][0].push_back(Position(1, 1));//#_
        felder[0][0].push_back(Position(0, 2));//#_
        felder[0][0].push_back(Position(1, 2));//##__

        felder[0][1].push_back(Position(0, 0));
        felder[0][1].push_back(Position(1, 0));//#_
        felder[0][1].push_back(Position(1, 1));//###_
        felder[0][1].push_back(Position(1, 2));//__

        felder[0][2].push_back(Position(0, 0));
        felder[0][2].push_back(Position(1, 0));//##__
        felder[0][2].push_back(Position(0, 1));//#_
        felder[0][2].push_back(Position(0, 2));//#_

        felder[0][3].push_back(Position(0, 0));
        felder[0][3].push_back(Position(1, 0));//###
        felder[0][3].push_back(Position(2, 0));//_#
        felder[0][3].push_back(Position(2, 1));

        felder[1][0].push_back(Position(0, 0));
        felder[1][0].push_back(Position(0, 1));//#_
        felder[1][0].push_back(Position(0, 2));//#_
        felder[1][0].push_back(Position(1, 2));//##__

        felder[1][1].push_back(Position(0, 0));
        felder[1][1].push_back(Position(0, 1));//###_
        felder[1][1].push_back(Position(0, 2));//#_
        felder[1][1].push_back(Position(2, 0));//__

        felder[1][2].push_back(Position(0, 0));
        felder[1][2].push_back(Position(1, 0));//##__
        felder[1][2].push_back(Position(1, 1));//#_
        felder[1][2].push_back(Position(1, 2));//#_

        felder[1][3].push_back(Position(2, 0));
        felder[1][3].push_back(Position(0, 1));//_#
        felder[1][3].push_back(Position(1, 1));//###_
        felder[1][3].push_back(Position(2, 1));

        break;
    }
    case SPIELSTEIN_L4:
    {
        name = "L4";
        farbe = HINTERGRUND_HELL_LILA;
        felder[0][0].push_back(Position(1, 0));
        felder[0][0].push_back(Position(1, 1));//#_
        felder[0][0].push_back(Position(1, 2));//#_
        felder[0][0].push_back(Position(0, 3));//#_
        felder[0][0].push_back(Position(1, 3));//##__

        felder[0][1].push_back(Position(0, 0));
        felder[0][1].push_back(Position(1, 0));//#_
        felder[0][1].push_back(Position(1, 1));//####
        felder[0][1].push_back(Position(1, 2));//__
        felder[0][1].push_back(Position(1, 3));

        felder[0][2].push_back(Position(0, 0));
        felder[0][2].push_back(Position(1, 0));//##__
        felder[0][2].push_back(Position(0, 1));//#_
        felder[0][2].push_back(Position(0, 2));//#_
        felder[0][2].push_back(Position(0, 3));//#_

        felder[0][3].push_back(Position(0, 0));
        felder[0][3].push_back(Position(1, 0));//####
        felder[0][3].push_back(Position(2, 0));//_#
        felder[0][3].push_back(Position(3, 0));
        felder[0][3].push_back(Position(2, 1));

        felder[1][0].push_back(Position(0, 0));//#
        felder[1][0].push_back(Position(0, 1));
        felder[1][0].push_back(Position(0, 2));//#_
        felder[1][0].push_back(Position(0, 3));//#_
        felder[1][0].push_back(Position(1, 3));//##__

        felder[1][1].push_back(Position(0, 0));
        felder[1][1].push_back(Position(0, 1));//####
        felder[1][1].push_back(Position(0, 2));//#_
        felder[1][1].push_back(Position(0, 3));
        felder[1][1].push_back(Position(2, 0));//__

        felder[1][2].push_back(Position(0, 0));
        felder[1][2].push_back(Position(1, 0));//##__
        felder[1][2].push_back(Position(1, 1));//#_
        felder[1][2].push_back(Position(1, 2));//#_
        felder[1][2].push_back(Position(1, 3));//#_

        felder[1][3].push_back(Position(3, 0));
        felder[1][3].push_back(Position(0, 1));//_#
        felder[1][3].push_back(Position(1, 1));//####
        felder[1][3].push_back(Position(2, 1));
        felder[1][3].push_back(Position(3, 1));



        break;
    }
    case SPIELSTEIN_I2:
    {
        name = "I2";
        farbe = HINTERGRUND_LILA;
        felder[0][0].push_back(Position(0, 0));//#_
        felder[0][0].push_back(Position(0, 1));//#_

        felder[0][1].push_back(Position(0, 0));//##__
        felder[0][1].push_back(Position(1, 0));//__

        felder[0][2].push_back(Position(0, 0));//#_
        felder[0][2].push_back(Position(0, 1));//#_

        felder[0][3].push_back(Position(0, 0));//##__
        felder[0][3].push_back(Position(1, 0));//__

        felder[1][0].push_back(Position(0, 0));//#_
        felder[1][0].push_back(Position(0, 1));//#_

        felder[1][1].push_back(Position(0, 0));//##__
        felder[1][1].push_back(Position(1, 0));//__

        felder[1][2].push_back(Position(0, 0));//#_
        felder[1][2].push_back(Position(0, 1));//#_

        felder[1][3].push_back(Position(0, 0));//##__
        felder[1][3].push_back(Position(1, 0));//__


        break;
    }
    case SPIELSTEIN_I3:
    {
        name = "I3";
        farbe = HINTERGRUND_HELL_BLAU;
        felder[0][0].push_back(Position(0, 0));//#_
        felder[0][0].push_back(Position(0, 1));//#_
        felder[0][0].push_back(Position(0, 2));//#_

        felder[0][1].push_back(Position(0, 0));//###_
        felder[0][1].push_back(Position(1, 0));//__
        felder[0][1].push_back(Position(2, 0));

        felder[0][2].push_back(Position(0, 0));//#_
        felder[0][2].push_back(Position(0, 1));//#_
        felder[0][2].push_back(Position(0, 2));//#_

        felder[0][3].push_back(Position(0, 0));//###_
        felder[0][3].push_back(Position(1, 0));//__
        felder[0][3].push_back(Position(2, 0));


        felder[1][0].push_back(Position(0, 0));//#_
        felder[1][0].push_back(Position(0, 1));//#_
        felder[1][0].push_back(Position(0, 2));//#_


        felder[1][1].push_back(Position(0, 0));//###_
        felder[1][1].push_back(Position(1, 0));//__
        felder[1][1].push_back(Position(2, 0));


        felder[1][2].push_back(Position(0, 0));//#_
        felder[1][2].push_back(Position(0, 1));//#_
        felder[1][2].push_back(Position(0, 2));//#_


        felder[1][3].push_back(Position(0, 0));//###_
        felder[1][3].push_back(Position(1, 0));//__
        felder[1][3].push_back(Position(2, 0));

        break;
    }
    case SPIELSTEIN_I4:
    {
        name = "I4";
        farbe = HINTERGRUND_HELL_GRAU;
        felder[0][0].push_back(Position(0, 0));//#_
        felder[0][0].push_back(Position(0, 1));//#_
        felder[0][0].push_back(Position(0, 2));//#_
        felder[0][0].push_back(Position(0, 3));//#_

        felder[0][1].push_back(Position(0, 0));//####
        felder[0][1].push_back(Position(1, 0));//__
        felder[0][1].push_back(Position(2, 0));
        felder[0][1].push_back(Position(3, 0));

        felder[0][2].push_back(Position(0, 0));//#_
        felder[0][2].push_back(Position(0, 1));//#_
        felder[0][2].push_back(Position(0, 2));//#_
        felder[0][2].push_back(Position(0, 3));//#_

        felder[0][3].push_back(Position(0, 0));//####
        felder[0][3].push_back(Position(1, 0));//__
        felder[0][3].push_back(Position(2, 0));
        felder[0][3].push_back(Position(3, 0));

        felder[1][0].push_back(Position(0, 0));//#_
        felder[1][0].push_back(Position(0, 1));//#_
        felder[1][0].push_back(Position(0, 2));//#_
        felder[1][0].push_back(Position(0, 3));//#_

        felder[1][1].push_back(Position(0, 0));//####
        felder[1][1].push_back(Position(1, 0));//__
        felder[1][1].push_back(Position(2, 0));
        felder[1][1].push_back(Position(3, 0));

        felder[1][2].push_back(Position(0, 0));//#_
        felder[1][2].push_back(Position(0, 1));//#_
        felder[1][2].push_back(Position(0, 2));//#_
        felder[1][2].push_back(Position(0, 3));//#_

        felder[1][3].push_back(Position(0, 0));//####
        felder[1][3].push_back(Position(1, 0));//__
        felder[1][3].push_back(Position(2, 0));
        felder[1][3].push_back(Position(3, 0));
        break;
    }
    case SPIELSTEIN_Q:
    {
        name = "Q";
        farbe = HINTERGRUND_ROT;
        felder[0][0].push_back(Position(0, 0));//##__
        felder[0][0].push_back(Position(1, 0));//##__
        felder[0][0].push_back(Position(0, 1));
        felder[0][0].push_back(Position(1, 0));

        felder[0][1].push_back(Position(0, 0));//##__
        felder[0][1].push_back(Position(1, 0));//##__
        felder[0][1].push_back(Position(0, 1));
        felder[0][1].push_back(Position(1, 0));

        felder[0][2].push_back(Position(0, 0));//##__
        felder[0][2].push_back(Position(1, 0));//##__
        felder[0][2].push_back(Position(0, 1));
        felder[0][2].push_back(Position(1, 1));

        felder[0][3].push_back(Position(0, 0));//##__
        felder[0][3].push_back(Position(1, 0));//##__
        felder[0][3].push_back(Position(0, 1));
        felder[0][3].push_back(Position(1, 1));

        felder[0][3].push_back(Position(0, 0));//##__
        felder[0][3].push_back(Position(1, 0));//##__
        felder[0][3].push_back(Position(0, 1));
        felder[0][3].push_back(Position(1, 1));

        felder[1][0].push_back(Position(0, 0));//##__
        felder[1][0].push_back(Position(1, 0));//##__
        felder[1][0].push_back(Position(0, 1));
        felder[1][0].push_back(Position(1, 1));

        felder[1][1].push_back(Position(0, 0));//##__
        felder[1][1].push_back(Position(1, 0));//##__
        felder[1][1].push_back(Position(0, 1));
        felder[1][1].push_back(Position(1, 1));

        felder[1][2].push_back(Position(0, 0));//##__
        felder[1][2].push_back(Position(1, 0));//##__
        felder[1][2].push_back(Position(0, 1));
        felder[1][2].push_back(Position(1, 1));

        felder[1][3].push_back(Position(0, 0));//##__
        felder[1][3].push_back(Position(1, 0));//##__
        felder[1][3].push_back(Position(0, 1));
        felder[1][3].push_back(Position(1, 1));


        break;
    }
    case SPIELSTEIN_QPLUS: //GECHECKT
    {
        name = "QPLUS";
        farbe = HINTERGRUND_GRUEN;
        felder[0][0].push_back(Position(0, 0));//#_
        felder[0][0].push_back(Position(0, 1));//##__
        felder[0][0].push_back(Position(1, 1));//##__
        felder[0][0].push_back(Position(0, 2));
        felder[0][0].push_back(Position(1, 2));


        felder[0][1].push_back(Position(0, 0));//###_
        felder[0][1].push_back(Position(1, 0));//##__
        felder[0][1].push_back(Position(2, 0));
        felder[0][1].push_back(Position(0, 1));
        felder[0][1].push_back(Position(1, 1));

        felder[0][2].push_back(Position(0, 0));//##__
        felder[0][2].push_back(Position(1, 0));//##__
        felder[0][2].push_back(Position(0, 1));//#_
        felder[0][2].push_back(Position(1, 1));
        felder[0][2].push_back(Position(1, 2));


        felder[0][3].push_back(Position(1, 0));//##_
        felder[0][3].push_back(Position(2, 0));//###__
        felder[0][3].push_back(Position(0, 1));
        felder[0][3].push_back(Position(1, 1));
        felder[0][3].push_back(Position(2, 1));


        felder[1][0].push_back(Position(1, 0));//#_
        felder[1][0].push_back(Position(0, 1));//##__
        felder[1][0].push_back(Position(1, 1));//##__
        felder[1][0].push_back(Position(0, 2));
        felder[1][0].push_back(Position(1, 2));

        felder[1][1].push_back(Position(0, 0));//##__
        felder[1][1].push_back(Position(1, 0));//###_
        felder[1][1].push_back(Position(0, 1));
        felder[1][1].push_back(Position(1, 1));
        felder[1][1].push_back(Position(2, 1));


        felder[1][2].push_back(Position(0, 0));//##__
        felder[1][2].push_back(Position(1, 0));//##__
        felder[1][2].push_back(Position(0, 1));//#_
        felder[1][2].push_back(Position(1, 1));
        felder[1][2].push_back(Position(1, 2));


        felder[1][3].push_back(Position(0, 0));//###__
        felder[1][3].push_back(Position(1, 0));//##_
        felder[1][3].push_back(Position(2, 0));
        felder[1][3].push_back(Position(1, 1));
        felder[1][3].push_back(Position(2, 1));
        break;
    }
    case SPIELSTEIN_T:
    {
        name = "T";
        farbe = HINTERGRUND_HELL_GELB;
        felder[0][0].push_back(Position(1, 0));//_#_
        felder[0][0].push_back(Position(0, 1));//###_
        felder[0][0].push_back(Position(1, 1));
        felder[0][0].push_back(Position(2, 1));

        felder[0][1].push_back(Position(0, 0));//#_
        felder[0][1].push_back(Position(0, 1));//##__
        felder[0][1].push_back(Position(1, 1));//#
        felder[0][1].push_back(Position(0, 2));

        felder[0][2].push_back(Position(1, 0));//###_
        felder[0][2].push_back(Position(0, 0));//#_
        felder[0][2].push_back(Position(1, 1));
        felder[0][2].push_back(Position(2, 0));

        felder[0][3].push_back(Position(1, 0));//#_
        felder[0][3].push_back(Position(0, 1));//##__
        felder[0][3].push_back(Position(1, 1));//#_
        felder[0][3].push_back(Position(1, 2));

        felder[1][0].push_back(Position(1, 0));//#_
        felder[1][0].push_back(Position(0, 1));//###_
        felder[1][0].push_back(Position(1, 1));
        felder[1][0].push_back(Position(2, 1));

        felder[1][1].push_back(Position(3, 0));//#_
        felder[1][1].push_back(Position(3, 1));//##__
        felder[1][1].push_back(Position(1, 1));//#
        felder[1][1].push_back(Position(3, 0));

        felder[1][2].push_back(Position(1, 0));//###_
        felder[1][2].push_back(Position(0, 0));//#_
        felder[1][2].push_back(Position(1, 1));
        felder[1][2].push_back(Position(2, 0));

        felder[1][3].push_back(Position(1, 0));//#_
        felder[1][3].push_back(Position(0, 1));//##__
        felder[1][3].push_back(Position(1, 1));//#_
        felder[1][3].push_back(Position(1, 2));


        break;
    }
    case SPIELSTEIN_TPLUS:
    {name = "TPLUS";
    farbe = HINTERGRUND_HELL_ROT;
    felder[0][0].push_back(Position(1, 0));//#_
    felder[0][0].push_back(Position(0, 1));//####
    felder[0][0].push_back(Position(1, 1));
    felder[0][0].push_back(Position(2, 1));
    felder[0][0].push_back(Position(3, 1));

    felder[0][1].push_back(Position(0, 0));//#_
    felder[0][1].push_back(Position(0, 1));//##__
    felder[0][1].push_back(Position(1, 1));//#
    felder[0][1].push_back(Position(0, 2));//#
    felder[0][1].push_back(Position(0, 3));

    felder[0][2].push_back(Position(0, 0));//####_
    felder[0][2].push_back(Position(1, 0));//_#_
    felder[0][2].push_back(Position(2, 0));
    felder[0][2].push_back(Position(3, 0));
    felder[0][2].push_back(Position(2, 1));

    felder[0][3].push_back(Position(1, 0));//#_
    felder[0][3].push_back(Position(1, 1));//#_
    felder[0][3].push_back(Position(0, 2));//##__
    felder[0][3].push_back(Position(1, 2));//#_
    felder[0][3].push_back(Position(1, 3));

    felder[1][0].push_back(Position(2, 0));//_#
    felder[1][0].push_back(Position(0, 1));//####
    felder[1][0].push_back(Position(1, 1));
    felder[1][0].push_back(Position(2, 1));
    felder[1][0].push_back(Position(3, 1));

    felder[1][1].push_back(Position(0, 0));//#_
    felder[1][1].push_back(Position(0, 1));//#_
    felder[1][1].push_back(Position(0, 2));//##
    felder[1][1].push_back(Position(1, 2));//#
    felder[1][1].push_back(Position(0, 3));

    felder[1][2].push_back(Position(0, 0));//####_
    felder[1][2].push_back(Position(1, 0));//#__
    felder[1][2].push_back(Position(2, 0));
    felder[1][2].push_back(Position(3, 0));
    felder[1][2].push_back(Position(1, 1));

    felder[1][3].push_back(Position(1, 0));//#_
    felder[1][3].push_back(Position(0, 1));//##__
    felder[1][3].push_back(Position(1, 1));//#_
    felder[1][3].push_back(Position(1, 2));//#_
    felder[1][3].push_back(Position(1, 3));

        break;
    }
    case SPIELSTEIN_FREI:
    {
        name = "FREI";
        farbe = HINTERGRUND_HELL_GRAU;
        break;
    }
    case SPIELSTEIN_LOESUNG:
    {
        name = "LOESUNG";
        farbe = HINTERGRUND_HELL_WEISS;
        felder[0][0].push_back(Position(2, 0));// _#
        felder[0][0].push_back(Position(0, 1));//#####
        felder[0][0].push_back(Position(1, 1));//#####
        felder[0][0].push_back(Position(2, 1));//###
        felder[0][0].push_back(Position(3, 1));
        felder[0][0].push_back(Position(3, 1));
        felder[0][0].push_back(Position(4, 1));
        felder[0][0].push_back(Position(0, 2));
        felder[0][0].push_back(Position(1, 2));
        felder[0][0].push_back(Position(2, 2));
        felder[0][0].push_back(Position(3, 2));
        felder[0][0].push_back(Position(4, 2));
        felder[0][0].push_back(Position(0, 3));
        felder[0][0].push_back(Position(1, 3));
        felder[0][0].push_back(Position(2, 3));


        break;
    }
    default:
        break;
    }
}
void Spielstein::zeichne()
{
    Cursor::setze_Farbe(farbe);
    int offset_x = position.getX();
    int offset_y = position.getY();

      for (unsigned int j = 0; j < felder[seite][orientierung].size(); j++) {
     Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x , felder[seite][orientierung][j].getY() + offset_y , ' ');
        }


}
void Spielstein::loesche()
{
    Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
    int offset_x = this->position.getX();
    int offset_y = this->position.getY();
    for (unsigned int j = 0; j < felder[seite][orientierung].size(); j++) {
        Console::zeichne_punkt(felder[seite][orientierung][j].getX() + offset_x, felder[seite][orientierung][j].getY() + offset_y, ' ');
    }

}
void Spielstein::bewegen(int richtung)
{

    //go up
    if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH) {

        this->position.setY(position.getY() - 1);


    }

    //go down
    else if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER) {


        this->position.setY(position.getY() + 1);

    }

    //go right
    else if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS) {


        this->position.setX(position.getX() + 1);

    }

    //go left
    else if (richtung == CONFIGURATION::SPIELSTEIN_BEWEGEN_LINKS) {


        this->position.setX(position.getX() - 1);

    }
    else if (richtung == CONFIGURATION::SPIELSTEIN_ROTIEREN_RECHTS) {

        rotation_rechts();
    }
    else if (richtung == CONFIGURATION::SPIELSTEIN_ROTIEREN_LINKS) {

        rotation_links();
    }
    else if (richtung == CONFIGURATION::SPIELSTEIN_FLIP) {
        flip();
    }
}

//Inkrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_rechts()
{
    if (orientierung == 3) {

        orientierung = 0;
    }

    else if (orientierung >=0  && orientierung < 3) {

        orientierung += 1;
    }
}

//Dekrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_links()
{
    if (orientierung == 0) {

        orientierung = 2;

    }
    else if (orientierung >= 0 && orientierung <= 3) {


        orientierung -= 1;
    }
}

//Inkrementiert das Attribut seite um 1, wobei stets Werte zwischen 0 und 1 angenommen werden.
void Spielstein::flip()
{
    if (seite == 0) {

        seite = 1;
    }
    else if (seite == 1) {

        seite = 0;
    }
}

//Gibt den felder Vektor der aktuellen Lage des Spielsteins zurück.
std::vector<Position>* Spielstein::getPositionen()
{
    this->seite = seite;
    this->orientierung = orientierung;

    return &this->felder[this->seite][this->orientierung];
}

//Durchläuft den felder Vektor des Spielsteins in aktueller Lage.
//Gibt true zurück, falls die übergebene Position innerhalb des Spielsteines liegt.
//Ansonsten wird false zurückgegeben.
bool Spielstein::innerhalb(Position pos) const
{
        if (this->position == pos ) {
            return true;
        }
        return false;
}

//Gibt war zurück, falls sich der aufrufende und der übergebene Spielstein sich in mindestens einer Position überlappen.
bool Spielstein::ueberlapp(Spielstein& sp)
{

        if (sp.position.getX() >= this->position.getX() && sp.position.getX() <= (this->position.getX() + 3) &&
            sp.position.getY() >= this->position.getY() && sp.position.getY() <= (this->position.getY() + 3)) {

            return true;
        }

        return false;
}

//Addiert zwei Spielsteine in ihrer aktuellen Lage und gibt die Summe als neuen Spielstein zurück.
Spielstein Spielstein::operator+ (const Spielstein& rhs) const
{
    Spielstein summe(SPIELSTEIN_FREI);

    summe.position = this->position + rhs.position;

    return summe;


}

std::string Spielstein::getfarbe(){

    return farbe;
}
