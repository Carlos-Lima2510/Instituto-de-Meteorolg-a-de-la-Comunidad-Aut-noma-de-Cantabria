#include <string>
#include <vector>
class Lluvia {
private:
    std::vector<std::string> arrayDeCadenas2;
    float arrayDeLluvia[5];
    int lluviaHistorica;
public:
    void SetLluviaHistorica();
    int GetLluviaHistorica();
    void SetArraydeMes(std::string, std::string, std::string, std::string, std::string, std::string);
    std::vector<std::string> GetArraydeMes();
    void SetArraydeLluvia(int posicion, float cantidad);
    float GetArraydeLluvia(int posicion);
};