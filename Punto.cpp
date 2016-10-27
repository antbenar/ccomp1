#include "Punto.h"
#include <iostream>
using namespace std;

Punto::Punto(){
    x=0.0;y=0.0;
}
Punto::Punto(double a,double b){
    x=a;y=b;
}
Punto::Punto(Punto &a){
    x=a.x;y=a.y;
}
void Punto::SetX(double a){
    x+=a;
}
void Punto::SetY(double a){
    y+=a;
}
double Punto::GetX(){
    return x;
}
double Punto::GetY(){
    return y;
}
void Punto::PrintPunto(){
    cout<<"("<<x<<","<<y<<")" ;
}
void Punto::ModifyPunto(double a,double b){
    x+=a;y+=b;
}
void Punto::ModifyPunto(Punto&a){
    x=a.x;y=a.y;
}

