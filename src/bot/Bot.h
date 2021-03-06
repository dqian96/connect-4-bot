//
// Created by David Qian on 2017-01-06.
//

#ifndef CONNECT_4_BOT_BOT_H
#define CONNECT_4_BOT_BOT_H


#include "../board/Board.h"
#include "Minimax.h"

#include <string>

struct gameSettings {
    int timebank;
    int timePerMove;
    int id;
    int adversaryId;
    std::string name;
    std::string adversaryName;
};

class Bot {
public:
    Bot(gameSettings, Board*);
    int makeMove();
    void setTimebank(int);
private:
    gameSettings gs;
    Board* board;
    Minimax mm;
};


#endif //CONNECT_4_BOT_BOT_H
