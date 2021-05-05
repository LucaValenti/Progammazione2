#include<iostream>
#include"auto.h"
#include"moto.h"
#include"camion.h"
#include"speciale.h"
#include"gara.h"
using namespace std;
int main(){
    Auto a("Benzina", "1400", 10, "Opel", 14000);
    //cout<<a.toString()<<endl;
    cout<<a<<endl;
    Veicolo* Array = new Veicolo(2);
    Array[0]=a;
    cout<<Array[0];
    Moto m("Metano", "125", 15, "BWM", 1200);
    Camion c("Diesel", "12500", 8, "Camionbello", 20000);
    Speciale s(8,"Benzina", "20500", 5, "Mercedes", 25000);
    Auto a2("Metano", "1400", 25, "Opel", 14000);
    Moto m2("Metano", "125", 50, "BWM", 1200);
    Camion c2("Diesel", "12500", 4, "Camionbello", 20000);
    Speciale s2(8,"Benzina", "20500", 6, "Mercedes", 25000);
    Auto a3("Diesel", "1400", 20, "Opel", 14000);
    Moto m3("Benzao", "125", 12, "BWM", 1200);
    Gara g(4,10);

    //g.partenza(Array);
  /*  enum class Veicolo{a,m,c,s,a2,m2,c2,s2,a3,m3};
    class Veicolo *v;

    for(int i=0;i<10;i++){
        v[i]=new Auto a;
    }*/
    
}