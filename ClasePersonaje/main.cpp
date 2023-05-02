#include <iostream>
#include "Personaje.h"

using namespace std;

int main(){
    personaje P("Kiro",21,"Humano","Masculino","Quantico");
   
    P.print();

    P.setNombre("Chalo");
    P.setEdad(20);
    P.setEspecie("Humano");
    P.setGenero("Masculino");
    P.setElemento("Fuego");

    P.print();

    return 0;

}