#include "Arquitecto.h"

Arquitecto::Arquitecto() : Persona() {
    universidad = "";
    usuarioDeTiktok = "";
    aniosDeEstudio = 0.0;
}

Arquitecto::Arquitecto(float altura, float peso, int edad, const std::string& nombre, const std::string& apellido, const std::string& tipoDeSangre,const std::string& universidad, const std::string& usuarioDeTiktok, float aniosDeEstudio): Persona(altura, peso, edad, nombre, apellido, tipoDeSangre) {
    this->universidad = universidad;
    this->usuarioDeTiktok = usuarioDeTiktok;
    this->aniosDeEstudio = aniosDeEstudio;
}

Arquitecto::Arquitecto(const Arquitecto& rhs) : Persona(rhs) {
    this->universidad = rhs.universidad;
    this->usuarioDeTiktok = rhs.usuarioDeTiktok;
    this-> aniosDeEstudio = rhs.aniosDeEstudio;
}

Arquitecto::~Arquitecto() = default;

std::string Arquitecto::getUniversidad() const {
    return universidad;
}
std::string Arquitecto::getUsuarioDeTiktok() const {
    return usuarioDeTiktok;
}
float Arquitecto::getAniosDeEstudio() const {
    return aniosDeEstudio;
}

