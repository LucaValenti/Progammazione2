#include<iostream>
#include<sstream>
#include"veicolo.h"

using namespace std;

class Moto: public Veicolo{
    public:
        Moto(string carburante, string motorizzazione, int velocitamax, string marca, int prezzo): 
            Veicolo(2, carburante, motorizzazione, velocitamax, marca, prezzo){}

        string toString() const{
            stringstream stream;
            stream<<"Sono una moto carburante motorizzazione velmax marca prezzo= "<<carburante<<" "<<motorizzazione<<" "<<velocitamax<<" "<<marca<<" "<<prezzo<<endl;
            return stream.str();
        }
};