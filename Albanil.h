#ifndef PERSONA_HERENCIA_ALBANIL_H
#define PERSONA_HERENCIA_ALBANIL_H
#include "Persona.h"

class Albanil : public Persona {
public:
    Albanil();
    Albanil(float altura, float peso, int edad, const std::string& nombre, const std::string& apellido, const std::string& tipoDeSangre,
            const std::string& herramientaPreferida, const std::string& chevePreferida, float kilosQueLevanta);
    Albanil(const Albanil& rhs);
    ~Albanil();

    std::string getHerramientaPreferida() const;
    std::string getChevePreferida() const;
    float getKilosQueLevanta() const;

private:
    std::string herramientaPreferida;
    std::string chevePreferida;
    float kilosQueLevanta;
};
#endif //PERSONA_HERENCIA_ALBANIL_H
