#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
#include "pointarray.h"
template<typename T>
class polygon{
protected:
    T p;
    int tam;
public:
    polygon(T &x);
    polygon();
    polygon(point x[],int sizze);
    double area();
    int numpol();
    int numsizz();
    const point * getpoint();
};
////////////////////////
template<typename T>
class Rectangle:public polygon{
public:
    Rectangle(const T &a,const T &b);
    Rectangle(int x1,int y1, int x2,int y2);
    double area();
};
////////////////////////////
template<typename T>
class triangle: public polygon{
public:
    triangle(T &a,T &b,T &c);
    double area();

};
#endif // POLYGON_H_INCLUDED
