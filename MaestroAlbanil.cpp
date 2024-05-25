#include "MaestroAlbanil.h"


MaestroAlbanil::MaestroAlbanil(): Albanil() {
    arquitectoAlQueResponde = "";
    cantidadDeFamilias = 0;
    aniosDeExperiencia = 0.0;
}

MaestroAlbanil::MaestroAlbanil(float altura, float peso, int edad, const std::string& nombre, const std::string& apellido, const std::string& tipoDeSangre,
                               const std::string& chevePreferida, const std::string& herramientaPreferida, float kilosQueLevanta,
                               const std::string& arquitectoAlQueResponde, int cantidadDeFamilias, float aniosDeExperiencia)
                               : Albanil (altura, peso, edad, nombre, apellido, tipoDeSangre,herramientaPreferida, chevePreferida, kilosQueLevanta) {
    this-> arquitectoAlQueResponde =  arquitectoAlQueResponde;
    this->cantidadDeFamilias = cantidadDeFamilias;
    this->aniosDeExperiencia = aniosDeExperiencia;
}

MaestroAlbanil::MaestroAlbanil(const MaestroAlbanil& rhs) : Albanil(rhs) {
    this-> arquitectoAlQueResponde = rhs.arquitectoAlQueResponde;
    this->cantidadDeFamilias = rhs.cantidadDeFamilias;
    this-> aniosDeExperiencia = rhs.aniosDeExperiencia;
}

MaestroAlbanil::~MaestroAlbanil() = default;

std::string MaestroAlbanil::getArquitectoAlQueResponde() const {
    return  arquitectoAlQueResponde;
}
int MaestroAlbanil::getCantidadDeFamilias() const {
    return cantidadDeFamilias;
}
float MaestroAlbanil::getAniosDeExperiencia() const {
    return aniosDeExperiencia;
}