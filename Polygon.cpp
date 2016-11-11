#include <iostream>
using namespace std;
#include "polygon.h"
template<typename T>//T por pointArray
polygon::polygon(){
    this->p = T();
}
template<typename T>
polygon::polygon(point points[],int sizz){
    this->p = T(points,sizz);
}
template<typename T>
polygon::polygon(T& x) {
    this->p = T(x);
}
int polygon::numsizz(){
    return p.getSize();

}
const point * polygon::getpoint(){
    return p.getpoint();
}
int polygon::numpol(){
    return this->tam;
}

////////////////////////////////////
template<typename T>
Rectangle::Rectangle(const T &a,const T &b){
    point a=new T[4];
    x = a.getx();
    y = a.gety();
    x1=b.getx();
    y1=b.gety();
    a[1] =T(x,y);
    a[2] =T(x1,y);
    a[3] =T(x,y1);
    a[4] =T(x1,y1);
    pointarray x(a,4);
    p = x;
    this->tam++;

}
Rectangle::Rectangle(int x, int y, int x1, int y1){
    point a=new point[4];
    a[1] =point(x,y);
    a[2] =point(x1,y);
    a[3] =point(x,y1);
    a[4] =point(x1,y1);
    pointarray x(a,4);
    p = x;
    this->tam++;
}

double Rectangle::area(){
    double largo = ((p.getpoint(1).getx())-p.getpoint(4).getx())
    double ancho = ((p.getpoint(2).gety())-(p.getpoint(3).gety()))
    return largo *ancho;

}

//////////////////////////////////////////////////
template<typename T>
triangle::triangle(T &a,T &b,T &c){
    T a=new T[3];
    a[1] = a;
    a[2] = b;
    a[3] = c;
    pointarray x(a,3);
    p = x;
    this->tam++;
}
double triangle::area(){
    double lado1 = sqrt(pow(p.getpoint(1).getx()-p.getpoint(2).getx())+pow(p.getpoint(1).gety()-p.getpoint(2).gety()));
    double lado2 = sqrt(pow(p.getpoint(2).getx()-p.getpoint(3).getx())+pow(p.getpoint(2).gety()-p.getpoint(3).gety()));
    double lado3 = sqrt(pow(p.getpoint(1).getx()-p.getpoint(3).getx())+pow(p.getpoint(1).gety()-p.getpoint(3).gety()));
}
