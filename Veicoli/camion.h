#include<iostream>
#include<sstream>
#include"veicolo.h"

using namespace std;

class Camion: public Veicolo{
    public:
        Camion(string carburante, string motorizzazione, int velocitamax, string marca, int prezzo): 
            Veicolo(4, carburante, motorizzazione, velocitamax, marca, prezzo){}

        string toString() const{
            stringstream stream;
            stream<<"Sono un Camion carburante motorizzazione velmax marca prezzo= "<<carburante<<" "<<motorizzazione<<" "<<velocitamax<<" "<<marca<<" "<<prezzo<<endl;
            return stream.str();
        }
};