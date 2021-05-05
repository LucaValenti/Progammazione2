#include<iostream>
#include<stdlib.h>

#include"veicolo.h"

class Gara{
    int durata;
    int numpartecipanti;
  
    Veicolo * veicoli;

    public:
        Gara(int durata, int numpartecipanti):durata(durata), numpartecipanti(numpartecipanti){
            veicoli[numpartecipanti];
        }

        void controlla(){//un sorpasso a giro
            for(int i=0;i<durata;i++){
                for(int j=0;j<numpartecipanti;j++){
                    if(veicoli[j].getvelo()<veicoli[j+1].getvelo())
                        cout<<"Sono davanti"<< veicoli[j].getvelo();
                        Veicolo *tmp;
                        tmp[j]=veicoli[j];
                        veicoli[j]=veicoli[j+1];
                        veicoli[j+1]=tmp[j];
                        cout<<"Adesso io"<<veicoli[j].getvelo();

                }
            }
        }
        void partenza(Veicolo *veicoli){
            srand(50);
            for(int i=0;i<durata;i++){
                for(int j=0;j<numpartecipanti;j++){
                    int scelta=rand()%2;
                    if(scelta==1)
                        veicoli[j].accelera();
                    else
                        veicoli[j].decelera();
                }
                this->controlla();
            }
            this->stampaclassifica();
        }
        void stampaclassifica(){
            for(int i=0;i<durata;i++)
                cout<<veicoli[i]<<endl;
        }


        
};