/*Definire una gerarchia di classi che rappresenta le forme geometriche.

Tutte le forme geometriche devono essere in grado di calcolare il Perimentro e l'area.
Le forme geometriche 

FORME base class
    *Perimentro:double
    *Area:double
    *ToString:String
    friend ostream&operator <<()


Curva 
    *double x,y
    *double lunghezza_max;
	    	lunghezza_min;

                Ellisse
                    lunghezza_min!=lunghezza_max
                    +Ellisse
                    +set
                    +get
                    +print
                    +Perimentro(overload di forma base)
                    +Area(overload di forma base)


                Cerchio
                    lunghezza_min==lunghezza_max
                    +Cerchio
                    +set
                    +get
                    +print
                    +Perimentro(overload di forma base)
                    +Area(overlaod di forma base)

Poligono
    *int n_lati;
    *double *lunghezza_max
    +Poligono(int n_lati)

                Triangoli

                Quadrilateri

                    Trapezi

                    Rettangoli
                        Quadrati
*/
#include<iostream>
using namespace std;
class Forma{
    protected:
        virtual double perimetro() {} //= 0;
		virtual double area() { return 0.0;}
		virtual string toString() { return "Forma";}
		friend ostream& operator<<(ostream& out, const Forma& forma) { return out;}
};