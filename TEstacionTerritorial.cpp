#include <iostream>
#include <string> 
#include "TEstacionTerritorial.h"

int Lluvia::GetLluviaHistorica(int historica){
    std::cin >> historica;
    return historica;
}
Lluvia::Lluvia(std::string Mes){
    aMes = Mes;
}
Lluvia::~Lluvia(){}

void Lluvia::SetArraydeMes(std::string Mes1, std::string Mes2, std::string Mes3, std::string Mes4, std::string Mes5, std::string Mes6)
{
    arrayDeCadenas2 = {Mes1, Mes2, Mes3, Mes4, Mes5, Mes6};
}

std::vector<std::string> Lluvia::GetArraydeMes()
{
    return arrayDeCadenas2;;
}

// std::vector<std::string> Lluvia::GetArray()
// {
//     return arrayDeCadenas;
// }
