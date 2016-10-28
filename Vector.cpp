#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(){
    inicio=Point();
    fin=Point();
    }

Vector::Vector( Point in , Point fi){
    inicio=in;
    fin= fi;
    }

Vector::PrintVector(){
    cout << "["; inicio.PrintPoint();
    cout << "," ; fin.PrintPoint();
    cout << "]";
    }



