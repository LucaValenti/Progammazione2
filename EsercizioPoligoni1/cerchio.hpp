#include<iostream>
#include<cmath>
#include<sstream>
//#include"forma.hpp"
using namespace std;
class Cerchio: public Forma{
    protected:
        double x,y;
        double r1;
    public:
        Cerchio(double _x,double _y,double _r1):
            x(_x),y(_y),r1(_r1){}
        
        double perimetro(){
            return 2*M_PI*r1;
        }

        double area(){
            return (r1*r1)*M_PI;
        }

        void setCenter(double _x, double _y){
            x=_x;
            y=_y;
        }

        void setRaggio(double _r1){
            r1=_r1;
        }

        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        double getRaggio(){
            return r1;
        }

        string ToString(){
            stringstream stream;
            stream<<"Cerchio di centro("<<x<<","<<y<<") e di raggio("<<r1<<")";
            return stream.str();
        }

        void print(){

        }

};