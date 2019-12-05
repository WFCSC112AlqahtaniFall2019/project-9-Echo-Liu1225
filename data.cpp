//
// Created by 刘颖恒 on 2019/12/5.
//

#include "Data.h"


//overloaded comparison operator
bool Data::operator<(const Data &rhs) {
    if(violation < rhs.violation){
        return true;
    }else{
        return false;
    }
}
//overloaded comparison operator
bool Data::operator<=(const Data &rhs) {
    if(violation <= rhs.violation){
        return true;
    }else{
        return false;
    }
}

//overloaded output stream
ostream &operator<<(ostream &os, const Data &d) {
    return os << d.state << " " << d.vehicleType << " " << d.vehicleMake << " " << d.violation << endl;
}

//constructor
Data::Data(string a, string b, string c, int d) {
    state=a;
    vehicleType=b;
    vehicleMake=c;
    violation=d;
}