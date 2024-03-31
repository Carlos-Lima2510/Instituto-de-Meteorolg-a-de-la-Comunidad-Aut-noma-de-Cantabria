#include <iostream>
#include <string> 
#include "TEstacionTerritorial.h"

void Lluvia::SetLluviaHistorica(){
    float historica = 10.0f;
    lluviaHistorica = historica;
}

float Lluvia::GetLluviaHistorica(){
    return lluviaHistorica;
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

float Lluvia::GetPromedio(){
    promedioDeLluvia = (arrayDeLluvia[0] + arrayDeLluvia[1] + arrayDeLluvia[2] + arrayDeLluvia[3] + arrayDeLluvia[4] + arrayDeLluvia[5]) / 6 ;
    return promedioDeLluvia;
}

void Lluvia::SetValorMayor(){

    valorMayorMensual = arrayDeLluvia[0];
        for (int i = 1; i < 5; ++i) {
        if (arrayDeLluvia[i] > valorMayorMensual) {
            valorMayorMensual = arrayDeLluvia[i];
        }
    }
    std::cout << "El valor maximo es: " << valorMayorMensual << " lts de agua" << std::endl;
}
void Lluvia::SetValorMenor(){

    valorMenorMensual = arrayDeLluvia[0];
        for (int i = 1; i < 5; i++) {
        if (arrayDeLluvia[i] < valorMenorMensual) {
            valorMenorMensual = arrayDeLluvia[i];
        }
    }
    std::cout << "El valor minimo es: " << valorMenorMensual << " lts de agua" << std::endl;
}

void Lluvia::SetValidacionSemestre1(){
    if (lluviaHistorica > promedioDeLluvia){
        std::cout << "" << std::endl;
        std::cout << "El Promedio de Lluvia en el Primer Semestre del Ano es Mayor al Historico" << std::endl;
    }
    else{
        std::cout << "El Promedio de Lluvia en el Primer Semestre del Ano es Menor o Igual al Historico" << std::endl;
    }
}
void Lluvia::SetValidacionSemestre2(){
    if (lluviaHistorica > promedioDeLluvia){
        std::cout << "" << std::endl;
        std::cout << "El Promedio de Lluvia en el Segundo Semestre del Ano es Mayor al Historico" << std::endl;
    }
    else{
        std::cout << "El Promedio de Lluvia en el Segundo Semestre del Ano es Menor o Igual al Historico" << std::endl;
    }
}
