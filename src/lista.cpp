#include <iostream>
#include <string>
#include <list>

using namespace std;
//Una lista guarda elementos, para acceder a ellos, se realiza un recorrido de todos los elementos

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string nombre, int edad){
            this-> nombre = nombre;
            this-> edad = edad;
        }
};

int main(int argc, char const *argv[])
{
    list<string> nombres;
    nombres.push_back("Pablo");
    nombres.push_back("Maria");
    nombres.push_back("Carlos");
    nombres.push_back("Juan");

    list<int> edades;
    edades.push_back(5);
    edades.push_back(7);
    edades.push_back(8);
    edades.push_back(10);
    
    list<Persona> personas;
    for (auto it = nombres.begin(); it != nombres.end(); it++)
    {
        personas.push_back(Persona(
            *it,
            5
        ));
    }
    
   
    return 0;
}
