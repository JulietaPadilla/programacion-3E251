#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const * argv[])
{
    //Abrir el archivo para la escritura
    ofstream archivo;
    archivo.open("archivo.txt");

    if(!archivo.is_open()){
        cerr << "Error al abrir el archivo para la escritura." << endl;
        return 1;
    }

    cout << "Escribiendo en el archivo..." << endl;
    archivo << "Hola Mundo." << endl;
    archivo << "Linea 1." << endl;
    archivo << "Linea 2." << endl;
    archivo << "Linea 3." << endl;
    archivo << "Linea 4." << endl;
    archivo << "Linea 5." << endl;

    archivo.close();

    //Abrir el archivo para lectura.
    ifstream archivoLectura("archivo.txt");
    if(!archivoLectura.is_open()){
        cerr << "Error al abrir el archivo para la lectura." << endl;
        return 1;
    }
    cout << "Leyendo el archivo..." << endl;
    string line;
    while(getline(archivoLectura, line)){
        cout << line << endl;
    }
    //Cerrar Archivo.
    archivoLectura.close();

    return 0;
}