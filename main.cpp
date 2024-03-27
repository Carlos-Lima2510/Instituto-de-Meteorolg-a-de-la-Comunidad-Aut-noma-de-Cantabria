#include <iostream>
#include "TEstacionTerritorial.h"
int main(){
  Lluvia *nombre;
  nombre = new Lluvia("Hola2", "hola");
  std::cout << "La Lluvia Histórica de la zona en 6 meses fue de: " << nombre->GetLluviaHistorica(0) << std::endl;
  std::cout << "El mes es: " << nombre->GetMes() << std::endl;
  std::cout << "La Cantidad es: " << nombre->GetCantidad() << std::endl;

  return 0;
}