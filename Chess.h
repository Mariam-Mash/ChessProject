//
// Created by Mariam on 13-Dec-19.
//


#ifndef CHESS_H
#define CHESS_H

#include <iostream>
#include <utility>

using namespace std;

class Chess
{
public:
    /** Default constructor */
    Chess();
    /** Default destructor */
    virtual ~Chess();

    friend ostream & operator<<(ostream &, const Chess);


    unsigned char type;
};

#endif // CHESS_H