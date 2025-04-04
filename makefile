PROYECTO = mario
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

DATOS = tipos
TYPE := $(BIN)/$(DATOS)

$(EXE) : $(SRC)/main.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)
# c++ main.cpp -o programa $(LIB) $(CXX) 
# si pongo $@ nos referminos al nombre de la receta, si ponemos $< nos referimos al nombre del programa que se va a compilar

run : $(EXE)
	./$<

clean:
	rm $(BIN)/*

# print:
# 	@echo 'Hola Mundo'

$(TYPE) : $(SRC)/memoria.cpp
	c++ $< -o $@ $(LIB) $(CXX) 

ejecutar : $(TYPE)
	./$<