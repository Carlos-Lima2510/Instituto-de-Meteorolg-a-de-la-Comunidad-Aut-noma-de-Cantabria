#include <iostream>
#include <string> // Include the header file for the String class
#include "TEstacionTerritorial.h"

int Lluvia::GetLluviaHistorica(int historica)
{
    return historica;
}

Lluvia::Lluvia(std::string Cantidad, std::string Mes)
{
    std::to_string(cantidad) = Cantidad;
    aMes = Mes;
}

float Lluvia::GetCantidad(){
  return cantidad;
}
std::string Lluvia::GetMes(){
    return aMes;
}