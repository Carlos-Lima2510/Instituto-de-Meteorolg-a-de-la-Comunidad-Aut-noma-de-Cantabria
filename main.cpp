#include <iostream>
#include "TEstacionTerritorial.h"
int main(){
  Lluvia *nombre;
  nombre = new Lluvia("Hola");
  std::cout << "La Lluvia Historica de la zona en 6 meses fue de: " << nombre->GetLluviaHistorica(4) << std::endl;

  nombre->SetArraydeMes("Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio");
  std::vector<std::string> meses = nombre->GetArraydeMes();
  for (size_t i = 0; i < meses.size(); i++){
    std::cout << "Mes " << i + 1 << ": " << meses[i] << std::endl;
  }

  return 0;
}