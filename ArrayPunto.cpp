#include "ArrayPunto.h"
#include <iostream>
#include "Punto.h"
using namespace std;

ArrayPunto::ArrayPunto()
{
    tam = 0;
    ArrayP = new Punto[0];
    cout << "Se creo el arreglo default\n";
}

ArrayPunto::ArrayPunto(const Punto pt[], int a){
    ArrayP=new Punto[a];
    for(int i=0; i<a;i++){
        ArrayP[i]=pt[i];
    }
    tam=a;
    cout << "Se creo el arreglo de lista de puntos ya creada []\n";
}

ArrayPunto::ArrayPunto(const ArrayPunto& pt){
    tam=pt.tam;
    ArrayP=new Punto[tam];
    for(int i=0; i<tam;i++)
        ArrayP[i]=pt.ArrayP[i];
    tam=pt.tam;
    cout << "Se creo el arreglo &pt\n";
}

void ArrayPunto::redimensionar(int tm)
{
    Punto *p = new Punto[tm];
    tam = tm;
    for(int i=0;i<tm;i++)
        p[i]=ArrayP[i];
    delete[] ArrayP;
    ArrayP = p;
}

void ArrayPunto::agregar(Punto &pt){
    tam++;
    redimensionar(tam+1);
    ArrayP[tam]=pt;
}
void ArrayPunto::insertar(const int position, const Punto &p)
{
    redimensionar(tam+1);
    for(int i=tam;i>position;i--)
        ArrayP[i]=ArrayP[i--];
    ArrayP[position]=p;
}

void ArrayPunto::remover(const int position){
    for(int i=position; i<tam-1; i++)
        ArrayP[i]=ArrayP[i+1];
    redimensionar(tam-1);
}

void ArrayPunto::imprimirArray(){
    cout << "El arreglo:\n";
    for(int i=0;i<tam;i++)
        ArrayP[i].PrintPunto();
}

const int ArrayPunto::getSize() const{
    return tam;
}

void ArrayPunto::borrar(){
    delete []ArrayP;
}

ArrayPunto::~ArrayPunto()
{
    delete []ArrayP;
    cout<<"\n se Borro el Array";
}

