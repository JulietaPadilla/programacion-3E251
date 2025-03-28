#include <iostream>
#include "Foco.hpp"

class Serie
{
private:
    Foco foquitos[10];

public:
    Serie(){}
    ~Serie(){}
    void EncenderTodo(){
        for (auto &&foco : foquitos)
        {
            foco.Encender();
        }
        
    }
    void ApagarTodo(){
        for (auto &&foco : foquitos)
        {
            foco.Apagar();
        }
        
    }
    void EncenderCantidad(int cantidad){
        for (size_t i = 0; i < cantidad; i++)
        {
            foquitos[i].Encender();
        }
        
    }
    void ApagarCantidad(int cantidad){
        for (size_t i = 0; i < cantidad; i++)
        {
            foquitos[i].Apagar();
        }
        
    }
    void RecorrerDerecha(){
        for (size_t i=0 ; i < 9; i++)
        {
           foquitos[i].Encender();
           foquitos[i].Apagar();
        }
        
        
    }
    void RecorrerIzquierda(){}
    void AlternarEncendido(){
        for (auto &&foco : foquitos)
        {
            foco.Alternar();
        }
    }
    void Imprimir(){
        for (auto &&foco : foquitos)
        {
            foco.Imprimir();
        }
        std::cout<<std::endl;
        
    }
};


