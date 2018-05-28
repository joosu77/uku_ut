#include "game.h"

game::game(){

}

void game::run(Pakk sisendKaardid){
    kaardid = sisendKaardid;
    run();
}

void game::run(){
    kaardid.scramble();
    std::vector<Kaart> laud;
    std::vector<Kaart> p1kasi;
    std::vector<Kaart> p2kasi;
    for (int i=0;i<7;i++){
        p1kasi.push_back(kaardid.pop());
        p2kasi.push_back(kaardid.pop());
    }
    AI p1 {p1kasi};
    AI p2 {p2kasi};
    bool turn = true;
    while (p1.hand.size()>0 &&
            p2.hand.size()>0 &&
            (laud.pealmine.mast != kaardid.trump.mast &&
            laud.pealmine.number != 7)){
        laud.append(kaardid.pop());
        if (turn){
            p1.play();        
            turn = false;
        } else {
            p2.play();
            turn = true;
        }
    }
    
}
