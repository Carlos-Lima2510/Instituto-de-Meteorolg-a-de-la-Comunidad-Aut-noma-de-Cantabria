#include <iostream>
#include "TEstacionTerritorial.h"
int main(){
  int change;
  Lluvia *nombre;
  nombre = new Lluvia("Hola");
  std::cout << "La Lluvia Historica de la zona en 6 meses fue de: " << nombre->GetLluviaHistorica(4) << std::endl;
  std::cout << "Seleccionar Epoca del Ano: " << std::endl;
  std::cout << " (1) Principios de Ano " << std::endl;
  std::cout << " (2) Finales de Ano" << std::endl;

    std::vector<std::string> meses; //Variable 
    std::cin >> change;

    switch (change) {
        case 1:
            nombre->SetArraydeMes("Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio");
            meses = nombre->GetArraydeMes();
            for (size_t i = 0; i < meses.size(); i++) {
                std::cout << "Mes " << i + 1 << ": " << meses[i] << std::endl;
            }
            break;
        case 2:
            nombre->SetArraydeMes("Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre");
            meses = nombre->GetArraydeMes();
            for (size_t x = 0; x < meses.size(); x++) {
                std::cout << "Mes " << x + 1 << ": " << meses[x] << std::endl;
            }
            break;
    }
  delete nombre;
  return 0;
}