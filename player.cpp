//
// Created by Mariam on 13-Dec-19.
//

#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::generateMove(char * move, Board & board)
{
    std::vector<Move *> moves = board.nextMoves();
    if(moves.empty())
    {
        strcpy(move, "NAN");
    }
    else
    {
        int times = rand()%(moves.size());
        strcpy(move, (moves[times]->toString()).c_str());
        cout<<"strcopy moves "<< move;
    }
}