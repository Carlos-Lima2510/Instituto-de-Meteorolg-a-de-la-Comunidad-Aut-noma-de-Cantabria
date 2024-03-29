#include <iostream>
#include <string> 
#include "TEstacionTerritorial.h"

void Lluvia::SetLluviaHistorica(){
    int historica;
    std::cout << "Ingresa el Valor de la Lluvia Historica Semestral: " << std::endl;
    std::cin >> historica;
    lluviaHistorica = historica;
}

int Lluvia::GetLluviaHistorica(){
    int historica;
    historica = lluviaHistorica;
    return historica;
}
void Lluvia::SetArraydeMes(std::string Mes1, std::string Mes2, std::string Mes3, std::string Mes4, std::string Mes5, std::string Mes6){    
    arrayDeCadenas2 = {Mes1, Mes2, Mes3, Mes4, Mes5, Mes6};
}

std::vector<std::string> Lluvia::GetArraydeMes(){
    return arrayDeCadenas2;
}

void Lluvia::SetArraydeLluvia(int posicion, float cantidad)
{
    arrayDeLluvia[posicion] = cantidad;
}

float Lluvia::GetArraydeLluvia(int posicion)
{
    return arrayDeLluvia[posicion];
}
