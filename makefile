PROYECTO = mario
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

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