#ifndef ARRAYPUNTO_H
#define ARRAYPUNTO_H
#include <Punto.h>

class ArrayPunto
{
    private:
        Punto* ArrayP;
        int tam;
        void redimensionar(int tm);
    public:
        ArrayPunto();
        ArrayPunto(const Punto pt[],  int a);
        ArrayPunto(const ArrayPunto& pt);
        void imprimirArray();
        void agregar(Punto &pt);
        void insertar(const int position, const Punto &pt);
        void remover(const int position);
        const int getSize() const;
        void borrar();

        virtual ~ArrayPunto();
};

#endif // ARRAYPUNTO_H

