#include <string> //nclude the header file for the String class

class Lluvia{
private:
int lluviaHistorica;
int lluviaMensual;
std::string Meses;

public:
    Lluvia::ConstructorMensual(std::string pMeses="");
    Lluvia::~ConstructorMensual();

    Lluvia GetLluviaHistorica();
    void SetLluviaHistorica(lluviaHistorica);
    void SetLluviaMensual("Enero",lluviaMensual);
};