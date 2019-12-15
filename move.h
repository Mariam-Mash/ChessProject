//
// Created by Mariam on 13-Dec-19.
//




#ifndef MOVE_H
#define MOVE_H

#include <iostream>

using namespace std;

class Move
{
public:
    /** Default constructor */
    Move(int,int,int);
    /** Default destructor */
    virtual ~Move();
    string toString();

    int destination() const;

    friend ostream & operator<<(ostream &, const Move);

    int type;
    int src;
    int dir;
    int len;
    int kind;
};

#endif