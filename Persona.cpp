#include "Persona.h"

Persona::Persona(float altura, float peso, int edad, std::string nombre, std::string apellido, std::string tipoDeSangre) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->tipoDeSangre = tipoDeSangre;
    this->altura = altura;
    this->peso = peso;
}

Persona::Persona (const Persona &rhs) {
    this->nombre = rhs.nombre;
    this->apellido = rhs.apellido;
    this->edad = rhs.edad;
    this->tipoDeSangre = rhs.tipoDeSangre;
    this->altura = rhs.altura;
    this->peso = rhs.peso;
}

Persona::Persona() = default;

Persona::~Persona() = default;

float Persona::getAltura() const {
    return altura;
}
float Persona::getPeso() const {
    return peso;
}
int Persona::getEdad() const {
    return edad;
}
std::string Persona::getNombre() const {
    return nombre;
}
std::string Persona::getApellido() const {
    return apellido;
}
std::string Persona::getTipoDeSangre() const {
    return tipoDeSangre;
}
