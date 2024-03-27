#include <string>
class Lluvia {
private:
    std::string aMes;
    float cantidad;
    float meses[7];
public:
    int GetLluviaHistorica(int);
    Lluvia(std::string Cantidad= "", std::string Mes= "");
    float GetCantidad();
    std::string GetMes(); // Declaración de la función
};