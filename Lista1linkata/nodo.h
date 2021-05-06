#include<iostream>
#include<sstream>
using namespace std;

template<class T>
class Nodo{
    T value;
    Nodo<T> * next;

    public:
        Nodo(T value,Nodo<T>* next):value(value), next(next){}
        Nodo(T value):Nodo(value,NULL){}
        Nodo():Nodo(0,NULL){}

        T getValue(){
            return this->value;
        }

        Nodo<T> * Next(){
            return this->next;
        }

        void setValue(T x){
            value=x;
        }

        void setNext(Nodo<T> * x){
            next=x;
        }

        string toString(){
            stringstream stream;
            stream<<"Valore nodo= "<<value<<" next= "<<next<<" "<<next->getValue() <<endl;
            return stream.str();
        }
};