#include "ArrayPunto.h"
#include <iostream>
#include "Punto.h"
using namespace std;


ArrayPunto::ArrayPunto(){
    ArrayP=new Punto[1];
    tam=0;
}

ArrayPunto::ArrayPunto(Punto* pt[], int a){
    ArrayP=new Punto[a];
    for(int i=0; i<a;i++){
        ArrayP[i]=Punto(pt[i]);
    }
    tam=a;
}

ArrayPunto::ArrayPunto(const ArrayPunto& pt){
    ArrayP=new Punto[pt.tam];
    for(int i=0; i<pt.tam;i++)
        ArrayP[i]=*pt[i];
    tam=pt.tam;
}

void ArrayPunto::agregar(const Punto &p){
    ArrayP[tam]=new Punto;
    ArrayP[tam-1]=Punto(p);
    tam++;
}
void ArrayPunto::insertar(const int position, const Punto &p){
    ArrayP[tam]=new Punto;
    for(int a=tam; a>position; a--)
        ArrayP[a]=ArrayP[a-1];
    ArrayP[a-1]=Punto(p);
    tam++;
}

void ArrayPunto::remover(const int position){
    for(; position<tam-2; position++)
        ArrayP[tam]=ArrayP[tam+1];
    delete ArrayP[tam-1];
    tam--;
}
const int ArrayPunto::getSize() const
    return tam;

void ArrayPunto::borrar()
    delete ArrayP;

ArrayPunto::~ArrayPunto()
{
    delete ArrayP;
    cout>>"se Borro el Array";
}

