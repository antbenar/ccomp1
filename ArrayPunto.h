#ifndef ARRAYPUNTO_H
#define ARRAYPUNTO_H
#include <Punto.h>

class ArrayPunto
{
    private:
        const Punto* ArrayP;
        int tam;
    public:
        ArrayPunto();
        ArrayPunto( Punto* pt[],  int a);
        ArrayPunto(const ArrayPunto& pt);

        void agregar(const Punto &pt);
        void insertar(const int position, const Punto &pt);
        void remover(const int position);
        const int getSize() const;
        void borrar();

        virtual ~ArrayPunto();
};

#endif // ARRAYPUNTO_H

