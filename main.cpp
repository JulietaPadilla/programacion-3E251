#include <iostream>
#include "Serie.hpp"

int main(int argc, char const *argv[])
{
    Serie serieNavidenia;

    serieNavidenia.EncenderTodo();
    serieNavidenia.Imprimir();

    serieNavidenia.ApagarTodo();
    serieNavidenia.Imprimir();

    serieNavidenia.EncenderCantidad(4);
    serieNavidenia.Imprimir();

    serieNavidenia.AlternarEncendido();
    serieNavidenia.Imprimir();
    
    serieNavidenia.RecorrerDerecha();
    serieNavidenia.Imprimir();

    return 0;
}