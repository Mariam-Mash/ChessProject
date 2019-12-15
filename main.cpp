#include "Main.h"

void test()
{
    {
        //creating array ov moves, which are actually vectores. this vector constructor idea is in Move.cpp file
        Move move[] = {Move(3,4,8),Move(3,5,1),Move(3,27,24),Move(3,4,5), Move(3,4,5)};
        //making each move to string
        assert(move[0].toString()=="d2-d3");
        assert(move[1].toString()=="c2-c1");
        assert(move[2].toString()=="a7-d7");
        assert(move[3].toString()=="d2-c2");
        assert(move[4].toString()=="d2-c2");
        cout <<"move 0 is"<< move[0];
        cout <<"move 1 is"<< move[1];
        cout <<"move 2 is"<< move[2];
        cout <<"move 3 is"<< move[3];


    }
    {
        Board board;
        board.flip(Move(1,2,2));
        assert(Move(1,2,2).toString() == "b1(g)");
        assert(board.cheses[2].type == 2);
        board.flip(Move(1,3,9));
        board.eati(Move(3,2,3));
	cout <<"some move is"<< Move(3,2,3).toString() << endl;
        assert(board.cheses[2].type == 0);
        assert(board.cheses[3].type == 2);
        board.flip(Move(1,12,5));
        board.move(Move(2,3,2));
     cout << Move(2,3,2).toString() << endl;
        assert(board.cheses[3].type == 0);
        assert(board.cheses[2].type == 2);
      cout << "our board is"<< board << endl;
    }
}

int main(int arg, char *argv[])
{
    test();
}