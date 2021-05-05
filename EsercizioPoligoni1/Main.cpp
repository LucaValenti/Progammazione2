#include "ellisse.hpp"
#include "cerchio.hpp"
using namespace std;
int main(){
    Ellisse e(0.0,0.0,3.0,4.0);
    cout<<e.ToString()<<endl;
    cout<<e.perimetro()<<endl;
    cout<<e.area()<<endl;

    Cerchio c(0.0,0.0,3.0);
    cout<<c.ToString()<<endl;
}