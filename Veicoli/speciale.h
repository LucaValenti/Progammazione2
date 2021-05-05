#include<iostream>
#include<sstream>
#include"veicolo.h"

using namespace std;

class Speciale: public Veicolo{
    public:
        Speciale(int numRuote, string carburante, string motorizzazione, int velocitamax, string marca, int prezzo): 
            Veicolo(numRuote, carburante, motorizzazione, velocitamax, marca, prezzo){}

        string toString() const{
            stringstream stream;
            stream<<"Sono un mezzo speciale carburante motorizzazione velmax marca prezzo= "<<carburante<<" "<<motorizzazione<<" "<<velocitamax
                    <<" "<<marca<<" "<<prezzo<<"con ruote"<<numRuote<<endl;
            return stream.str();
        }
};