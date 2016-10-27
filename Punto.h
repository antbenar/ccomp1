#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    private:
        double x;
        double y;
    public:
        Punto();
        Punto(double a,double b);
        Punto(Punto &a);
        void SetX(double a);
        void SetY(double a);
        double GetX();
        double GetY();
        void PrintPunto();
        void ModifyPunto(double a,double b);
        void ModifyPunto(Punto &a);
};

#endif
