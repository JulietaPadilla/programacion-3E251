#include <string>
#include <iostream>
using namespace std;

int main(){
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"float: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"double: "<<sizeof(double)<<" bytes"<<endl;
    cout<<"bool: "<<sizeof(bool)<<" bytes"<<endl;

    cout<<"Operador Dirección"<<endl;
    int a = 74;
    int b = 185;

    cout<<"Dirección de A: "<<&a<<endl;
    cout<<"Dirección de B: "<<&b<<endl;

    int* direccion = &a;
    cout<<"Dirección: "<<direccion<<endl;
    cout<<"Valor de la dirección (indirección): "<<*direccion<<endl;
    cout<<"Dirección Puntero: "<<&direccion<<endl;
    cout<<"Tamaño del Puntero:"<<sizeof(direccion)<< " bytes"<<endl;
}

