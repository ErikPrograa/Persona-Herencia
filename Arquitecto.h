#ifndef PERSONA_HERENCIA_ARQUITECTO_H
#define PERSONA_HERENCIA_ARQUITECTO_H
#include "Persona.h"

class Arquitecto : public Persona {
public:
    Arquitecto();
    Arquitecto(float altura, float peso, int edad, const std::string& nombre, const std::string& apellido, const std::string& tipoDeSangre,
            const std::string& universidad, const std::string& usuarioDeTiktok, float aniosDeEstudio);
    Arquitecto(const Arquitecto& rhs);
    ~Arquitecto();

    std::string getUniversidad() const;
    std::string getUsuarioDeTiktok() const;
    float getAniosDeEstudio() const;

private:
    std::string universidad;
    std::string usuarioDeTiktok;
    float aniosDeEstudio;
};
#endif //PERSONA_HERENCIA_ARQUITECTO_H
