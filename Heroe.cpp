#include <iostream>
#include "Heroe.h"

/**
 * @class Heroe
 * Implementación de la clase Héroe
 * 
 * Esta clase contiene la implementación del Heroe, el cual tiene puntos de vida, puntos de ataque, y un indicador
 * de aunmento de daño en base a los esbirros asesinados, incrementado en base a la experiencia obtenida
 * 
 */


 /**
  * Constructor de clase Heroe 
  * 
  * 
  * Incializa un heroe con lois puntos de vida especificado, un ataque con un daño predeterminado, y la experiencia en 0
  * 
  * @param vida Puntos de vida iniciales del héroe 
  */
Heroe::Heroe(int vida){
    this->vida = vida;
    this->ataque = 2;
    this->machineLearning = 0;
}


/**
 * Esta función obtiene los puntos de vida actuales del héroe.
 * 
 * @return int Puntos de vida restantes.
 */
int Heroe::getVida(){
    return vida;
}


/**
 * Esta función obtiene el valor actual de ataque del héroe.
 * 
 * @return int Valor del daño que el héroe puede infligir.
 */
int Heroe::getAtaque(){
    return ataque;
}

/**
 * Esta función aplica daño al héroe reduciendo su vida.
 * 
 * @param dañoRecibido Cantidad de daño a descontar de los puntos de vida del héroe.
 */
void Heroe::recibirAtaque(int dañoRecibido){
    vida -= dañoRecibido;
}
/**
 * Incrementa la experiencia del héroe.
 * 
 * Cada vez que esta función se llama, la experiencia aumenta en 1. Al llegar a 5, se incrementa
 * el ataque en 1 y se reinicia la experiencia a 0.
 */
void Heroe::aumentarExperiencia() {
    machineLearning++;
    if (machineLearning == 5) {
        ataque++;
        machineLearning = 0;
    }
}