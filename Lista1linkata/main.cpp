#include<iostream>
#include"nodo.h"

using namespace std;

int main(){
    Nodo<int> a(10);
    Nodo<int> b(17,&a);

    cout<<b.toString();
}