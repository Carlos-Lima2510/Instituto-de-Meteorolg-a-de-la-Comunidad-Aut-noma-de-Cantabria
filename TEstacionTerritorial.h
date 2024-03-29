#include <string>
#include <vector>
class Lluvia {
private:
    std::string aMes;
    std::vector<std::string> arrayDeCadenas = { "Enero", "Febrero", "Marzo", "Abril", "Mayo" };
    std::vector<std::string> arrayDeCadenas2;
public:
    int GetLluviaHistorica(int);
    Lluvia(std::string Mes= "");
    ~Lluvia();
    void SetArraydeMes(std::string, std::string, std::string, std::string, std::string, std::string);
    std::vector<std::string> GetArraydeMes();
};