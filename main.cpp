#include <iostream>
#include <vector>
#include "TEstacionTerritorial.h"

void Semestre1(Lluvia *nombre);
void Semestre2(Lluvia *nombre);

int main(){
  int change;
  Lluvia *nombre;
  nombre = new Lluvia();
  nombre->SetLluviaHistorica();
  std::cout << "La Lluvia Historica de la zona en 6 meses fue de: " << nombre->GetLluviaHistorica() << " Lts de Agua" << std::endl;
  std::cout << "Seleccionar Epoca del Ano: " << std::endl;
  std::cout << " (1) Principios de Ano " << std::endl;
  std::cout << " (2) Finales de Ano" << std::endl;
  std::cin >> change;

    switch (change) {
        case 1:
        Semestre1(nombre);
            break;
        case 2:
        Semestre2(nombre);
            break;
    }
  delete nombre;
  return 0;
}

void Semestre1(Lluvia *nombre){
    std::vector<std::string> meses; //Variable
    nombre->SetArraydeMes("Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio");
    nombre->SetArraydeLluvia(0,5);
    nombre->SetArraydeLluvia(1,3);
    nombre->SetArraydeLluvia(2,1);
    nombre->SetArraydeLluvia(3,10);
    nombre->SetArraydeLluvia(4,3);
    nombre->SetArraydeLluvia(5,0);
    meses = nombre->GetArraydeMes();
    for (int i = 0; i < meses.size(); i++) {
      std::cout << "Mes " << i + 1 << ": " << meses[i] << " -- Cantidad de lluvia Caida: " << nombre->GetArraydeLluvia(i) << std::endl;
    }
}
void Semestre2(Lluvia *nombre){
    std::vector<std::string> meses; //Variable
    nombre->SetArraydeMes("Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre");
    nombre->SetArraydeLluvia(0,4);
    nombre->SetArraydeLluvia(1,1);
    nombre->SetArraydeLluvia(2,2);
    nombre->SetArraydeLluvia(3,34);
    nombre->SetArraydeLluvia(4,34);
    nombre->SetArraydeLluvia(5,24);
    meses = nombre->GetArraydeMes();
    for (int i = 0; i < meses.size(); i++) {
      std::cout << "Mes " << i + 1 << ": " << meses[i] << " -- Cantidad de lluvia Caida: " << nombre->GetArraydeLluvia(i) << std::endl;
    }
}