//
// Created by Mariam on 13-Dec-19.
//

#include "move.h"

Move::Move(int type, int src, int destinationOrkind)
{
    this->type = type;
    cout<<"types are "<< type;
    switch(type)
    {
        case 0: // overboard.
            break;
        case 1: // flip
            this->src = src;
            this->kind = destinationOrkind;
            cout<<"destinationOrkind is  "<< destinationOrkind;
            break;
        case 2: // move
            this->src = src;
            len = 1;
            switch(destinationOrkind - src)
            {
                case -4:
                    dir = 0;
                    break;
                case -1:
                    dir = 1;
                    break;
                case 1:
                    dir = 3;
                    break;
                case 4:
                    dir = 2;
                    break;
                default :
                    exit(1);
            };
            break;
        case 3: // eat
            this->src = src;
            int dif = destinationOrkind - src;

            cout<<"dif is  "<< dif;
            if(dif == 0)
            {
                exit(1);
            }
            else if(dif % 4 == 0)
            {
                dir = (dif>0)   ? 2 : 0;
                len = (dif>0) ? (dif/4) : (-dif/4);
                cout<<"else if 1 dif is  " << dif;
                cout<<"else if  1 len is  " << len;

            }
            else if(-4 < dif && dif < 4)
            {
                dir = (dif>0) ? 3 : 1;
                len = (dif>0) ? dif : -dif;

                cout<<"else if 2 dif is  " << dif;
                cout<<"else if 2 len is  " << len;
            }
            else exit(1);
            break;
    };
}

Move::~Move()
{
    //dtor
}

string Move::toString()
{
    int idestination = destination();
    cout<<"int idestination "<< idestination;
    if(0<=src&&src<32&&0<=idestination&&idestination<32){
        return string{char('d'-src%4),char('1'+src/4),'-',char('d'-idestination%4),char('1'+idestination/4)};
    }
    else if(0<=src&&src<32&&0<=kind&&kind<32){
        return string{char('d'-src%4),char('1'+src/4),'(',"-kgmrncpKGMRNCPX"[kind],')'};
    }
    return "NAN";
}

int Move::destination() const
{
    switch(dir)
    {
        case 0:
            return src-4*len;
        case 1:
            return src-1*len;
        case 2:
            return src+4*len;
        case 3:
            return src+1*len;
        default:
            return -1;
    }
}

std::ostream & operator<<(std::ostream & os, const Move move)
{
    return os << move.type << " := " << move.src << " " << move.destination() << std::endl;
}