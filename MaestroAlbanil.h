#ifndef PERSONA_HERENCIA_MAESTROALBANIL_H
#define PERSONA_HERENCIA_MAESTROALBANIL_H
#include "Albanil.h"



class MaestroAlbanil : public Albanil{
public:
    MaestroAlbanil();
    MaestroAlbanil(float altura, float peso, int edad, const std::string& nombre, const std::string& apellido,
                   const std::string& tipoDeSangre,const std::string& chevePreferida,
                   const std::string& herramientaPreferida, float kilosQueLevanta,
                   const std::string& arquitectoAlQueResponde, int cantidadDeFamilias, float aniosDeExperiencia);
    MaestroAlbanil(const MaestroAlbanil& rhs);

    ~MaestroAlbanil();

    std::string getArquitectoAlQueResponde() const;
    int getCantidadDeFamilias() const;
    float getAniosDeExperiencia() const;

private:
    std::string arquitectoAlQueResponde;
    int cantidadDeFamilias;
    float aniosDeExperiencia;
};
#endif //PERSONA_HERENCIA_MAESTROALBANIL_H
