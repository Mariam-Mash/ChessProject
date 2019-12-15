//
// Created by Mariam on 13-Dec-19.
//

#if BOARD_H
#endif BOARD_H

#include "move.h"
#include "Kinds.h"
#include "Chess.h"
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Board
{
public:
    /** Default constructor */
    Board();
    /** Default destructor */
    virtual ~Board();

    void flip(Move move); // type = 1
    void move(Move move); // type = 2
    void eati(Move move);
    vector<Move *> nextMoves();

    friend ostream & operator<<(ostream &, const Board);

    Chess cheses[32];


    int darks;

    Kinds kinks;

};
