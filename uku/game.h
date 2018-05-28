#include "Kaart.h"
#include "Pakk.h"

#ifndef GAME_H
#define GAME_H

class game {
    private:
    
    public:
        Pakk kaardid;
        game();
        void run();
        void run(Pakk sisendKaardid);    
}