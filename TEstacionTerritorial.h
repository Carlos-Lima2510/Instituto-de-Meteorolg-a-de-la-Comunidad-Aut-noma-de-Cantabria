#include <string>
#include <vector>
class Lluvia {
private:
    std::vector<std::string> arrayDeCadenas2;
    float arrayDeLluvia[5];
    float lluviaHistorica;
    float promedioDeLluvia;
    float valorMayorMensual;
    float valorMenorMensual;
public:
    void SetLluviaHistorica();
    float GetLluviaHistorica();
    void SetArraydeMes(std::string, std::string, std::string, std::string, std::string, std::string);
    std::vector<std::string> GetArraydeMes();
    void SetArraydeLluvia(int posicion, float cantidad);
    float GetArraydeLluvia(int posicion);
    float GetPromedio();
    void SetValorMayor();
    void SetValorMenor();
    void SetValidacionSemestre1();
    void SetValidacionSemestre2();
};