//
// Created by Mariam on 13-Dec-19.
//

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Board.h"
#include "move.h"

class Player
{
public:
    /** Default constructor */
    Player();
    /** Default destructor */
    ~Player();

    void generateMove(char *, Board &);
        void makeMove(char *);
        void makeMove(const char *, Board *&);

};

#endif // PLAYER_H