#include <iostream>
#include <vector>
#include "TEstacionTerritorial.h"

void Semestre1(Lluvia *nombre);
void Semestre2(Lluvia *nombre);

int main(){
  int change;
  Lluvia *nombre;
  nombre = new Lluvia();
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
    nombre->SetLluviaHistorica();
    nombre->SetArraydeMes("Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio");
    nombre->SetArraydeLluvia(0,5.50);
    nombre->SetArraydeLluvia(1,3.00);
    nombre->SetArraydeLluvia(2,1.43);
    nombre->SetArraydeLluvia(3,10.50);
    nombre->SetArraydeLluvia(4,3.60);
    nombre->SetArraydeLluvia(5,0.50);
    meses = nombre->GetArraydeMes();
    for (int i = 0; i < meses.size(); i++) {
      std::cout << "Mes " << i + 1 << ": " << meses[i] << " -- Cantidad de lluvia Caida: " << nombre->GetArraydeLluvia(i) << " lts de agua" << std::endl;
    }
    std::cout << "Valor de la Lluvia Historica en el Primer Semestre: " << nombre->GetLluviaHistorica() << std::endl;
    std::cout << "Promedio de Lluvia Semestral: " << nombre->GetPromedio() << std::endl;
    nombre->SetValorMayor();
    nombre->SetValorMenor();
    nombre->SetValidacionSemestre1();
}
void Semestre2(Lluvia *nombre){
    std::vector<std::string> meses; //Variable
    nombre->SetLluviaHistorica();
    nombre->SetArraydeMes("Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre");
    nombre->SetArraydeLluvia(0,4);
    nombre->SetArraydeLluvia(1,1);
    nombre->SetArraydeLluvia(2,2);
    nombre->SetArraydeLluvia(3,34);
    nombre->SetArraydeLluvia(4,34);
    nombre->SetArraydeLluvia(5,24);
    meses = nombre->GetArraydeMes();
    for (int i = 0; i < meses.size(); i++) {
      std::cout << "Mes " << i + 1 << ": " << meses[i] << " -- Cantidad de lluvia Caida: " << nombre->GetArraydeLluvia(i) << " lts de agua" << std::endl;
    }
    std::cout << "Valor de la Lluvia Historica en el Segundo Semestre: " << nombre->GetLluviaHistorica() << std::endl;
    std::cout << "Promedio de Lluvia Semestral: " << nombre->GetPromedio() << std::endl;
    nombre->SetValorMayor();
    nombre->SetValorMenor();
    nombre->SetValidacionSemestre2();
}