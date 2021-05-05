/*Si implementi un programma che rappresenti una gerarchia di veicoli.
Ogni veicolo ha un numero di ruote, un tipo di carburante, una motorizzazione,
una velocità massima, una marca ed un prezzo.
Tra i veicoli distinguiamo motocicli, automobili, camion, mezzi speciali.

Si simuli una gara tra 10 veicoli di tipo diverso, riportando 
posizioni iniziali, sorpassi e classifica finale.*/
#ifndef VEICOLO_H
#define VEICOLO_H
#include<iostream>
using namespace std;

class Veicolo{
    protected:
        int numRuote;
        string carburante;
        string motorizzazione;
        int velocitamax;
        int velocita;
        string marca;
        int prezzo;

    
    public:
        Veicolo(int numRuote, string carburante, string motorizzazione, int velocitamax, string marca, int prezzo):
            numRuote(numRuote), carburante(carburante), motorizzazione(motorizzazione), velocitamax(velocitamax), velocita(0), marca(marca), prezzo(prezzo){}

        int getnumRuote(){return numRuote;}
        int getvelmax(){return velocitamax;}
        int getvelo(){return velocita;}
        int getprezzo(){return prezzo;}
        string getcarburante(){return carburante;}
        string getmotorizzazione(){return motorizzazione;}
        string getmarca(){return marca;}

        void setnumRuote(int n){numRuote=n;}
        void setvelmax(int n){velocitamax=n;}
        void setprezzo(int n){prezzo=n;}
        void setcarburante(string c){carburante=c;}
        void setmotorizzazione(string m){motorizzazione=m;}
        void setmarca(string m){marca=m;}

        void accelera(){
            if(velocita<velocitamax)
                velocita++;
        }
        void decelera(){
            if(velocita>0)
                velocita--;
        }

        

        virtual string toString() const =0;

        friend ostream& operator<<(ostream&out, const Veicolo&v){
            out<<v.toString();
            return out;
        }
};

#endif