#ifndef PERSONA_HERENCIA_PERSONA_H
#define PERSONA_HERENCIA_PERSONA_H
#include <string>

class Persona {
private:
    float altura{};
    float peso{};
    int edad{};
    std::string nombre;
    std::string apellido;
    std::string tipoDeSangre;

public:
    Persona();
    Persona(float altura, float peso, int edad, std::string nombre, std::string apellido, std::string tipoDeSangre);
    Persona (const Persona &rhs);

    float getAltura() const;
    float getPeso() const;
    int getEdad() const ;
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getTipoDeSangre() const;
    ~Persona();
};
#endif //PERSONA_HERENCIA_PERSONA_H
