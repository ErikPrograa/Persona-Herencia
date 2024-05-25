#include "Albanil.h"

Albanil::Albanil() : Persona() {
    herramientaPreferida = "";
    chevePreferida = "";
    kilosQueLevanta = 0.0;
}

Albanil::Albanil(float altura, float peso, int edad, const std::string& nombre, const std::string& apellido, const std::string& tipoDeSangre,const std::string& herramientaPreferida, const std::string& chevePreferida, float kilosQueLevanta): Persona(altura, peso, edad, nombre, apellido, tipoDeSangre) {
    this->herramientaPreferida = herramientaPreferida;
    this->chevePreferida = chevePreferida;
    this->kilosQueLevanta = kilosQueLevanta;
}

Albanil::Albanil(const Albanil& rhs) : Persona(rhs) {
    this->herramientaPreferida = rhs.herramientaPreferida;
    this->chevePreferida = rhs.chevePreferida;
   this-> kilosQueLevanta = rhs.kilosQueLevanta;
}

Albanil::~Albanil() = default;

std::string Albanil::getHerramientaPreferida() const {
    return herramientaPreferida;
}
std::string Albanil::getChevePreferida() const {
    return chevePreferida;
}
float Albanil::getKilosQueLevanta() const {
    return kilosQueLevanta;
}
