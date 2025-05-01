#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Un vector nos permite acceder a elementos especificos a diferencia de las listas, además de que los datos van enumerados

int main(int argc, char const*argv[]){
    vector<string> nombres;

    nombres.emplace_back("Ramon");
    nombres.emplace_back("Segundo");
    nombres.emplace_back("Tercer");

    cout<< nombres.at(2) <<endl;

    for (auto &&nombre :  nombres)
    {
        cout << nombre <<endl;
    }
    
}



