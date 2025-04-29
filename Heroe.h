#ifndef HEROE
#define HEROE

#include "Esbirro.h"

/**
 * @class Heroe
 * Clase que representa un héroe en el juego.
 * 
 * La clase Heroe contiene los atributos y comportamientos básicos de un personaje principal, 
 * incluyendo vida, ataque y un sistema de experiencia basado en el número de enemigos derrotados.
 */
class Heroe {
    private:
        int vida;              /**< Puntos de vida del héroe. */
        int ataque;            /**< Daño que puede infligir el héroe. */
        int machineLearning;   /**< Contador de experiencia. Cada 5 incrementos aumenta el ataque. */
    
    public:
        /**
         * Constructor por defecto de la clase Heroe.
         * 
         * Crea un héroe sin inicializar sus atributos.
         */
        Heroe() = default;

        /**
         * Constructor que inicializa el héroe con puntos de vida.
         * 
         * @param vida Puntos de vida iniciales del héroe.
         */
        Heroe(int vida);

        /**
         * Obtiene los puntos de vida actuales del héroe.
         * 
         * @return int Puntos de vida.
         */
        int getVida();

        /**
         * Obtiene el valor actual de ataque del héroe.
         * 
         * @return int Valor de ataque.
         */
        int getAtaque();

        /**
         * Aplica daño al héroe, reduciendo sus puntos de vida.
         * 
         * @param dañoRecibido Cantidad de daño recibido.
         */
        void recibirAtaque(int dañoRecibido);

        /**
         * Incrementa la experiencia del héroe.
         * 
         * Cada 5 incrementos, el ataque del héroe aumenta en 1 y el contador de experiencia se reinicia.
         */
        void aumentarExperiencia();
};

#endif