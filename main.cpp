#include <iostream>
#include "TEstacionTerritorial.h"
int main(){
    TLluvia hola;
    hola.valorLluviaHistorica = 2;
    Lluvia *numero;
    numero = new Lluvia("2024");
    numero->SetLluviaHistorica(hola);
   return 0;
 }