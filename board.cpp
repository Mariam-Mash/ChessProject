
//
// Created by Mariam on 13-Dec-19.
//


#include "Board.h"
#include <cstdint>

Board::Board()
        :darks(32)
{}

Board::~Board()
{
     
}

void Board::flip(Move move)
{
    cheses[move.src].type = move.kind;
}

void Board::move(Move move)
{
    cheses[move.destination()].type = cheses[move.src].type;
    cheses[move.src].type = 0;
}

void Board::eati(Move move)
{
    cheses[move.destination()].type = cheses[move.src].type;
    cheses[move.src].type = 0;
}

vector<Move *> Board::nextMoves()
{
    return vector<Move*>();
}

ostream & operator<<(ostream & os, const Board board)
{
    for ( int i=0; i<8; i++)
    {
        for( int j=3; j>=0; j--)
            os << " , " << board.cheses[4*i+j];
        os << "\n";
    }
    return os << board.kinks;
}