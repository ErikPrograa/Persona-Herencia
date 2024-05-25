#include <iostream>
#include "MaestroAlbanil.h"


int main() {
    MaestroAlbanil albanil1 (1.75 , 90.50, 38,"Juan", "Perez","O+", "Martillo", "Tecate", 150.0, "Pedro", 2, 20.0);
    std::cout << "Altura: " << albanil1.getAltura() << std::endl;
    std::cout << "Peso: " << albanil1.getPeso() << std::endl;
    std::cout << "Edad: " << albanil1.getEdad() << std::endl;
    std::cout << "Nombre: " << albanil1.getNombre() << std::endl;
    std::cout << "Perez: " << albanil1.getApellido() << std::endl;
    std::cout << "Tipo de Sangre: " << albanil1.getTipoDeSangre() << std::endl;
    std::cout << "Herramienta preferida: " << albanil1.getHerramientaPreferida() << std::endl;
    std::cout << "Ceveza Preferida: " << albanil1.getChevePreferida() << std::endl;
    std::cout << "Kilos que levanta: " << albanil1.getKilosQueLevanta() << std::endl;
    std::cout << "Arquitecto al que responde: " << albanil1.getArquitectoAlQueResponde() << std::endl;
    std::cout << "Años de experiencia: " << albanil1.getAniosDeExperiencia() << std::endl;
    std::cout << "Cantidad de familias: " << albanil1.getCantidadDeFamilias() << std::endl;


    return 0;
}
