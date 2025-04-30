#ifndef ESBIRRO
#define ESBIRRO

#include "Heroe.h"

/**
 *  @class Esbirro
 *  Declaración de clase Esbirro
 * 
 *  La clase esbirro representa un enemigo en el combate, estos poseen vida, ataque, si son del tipo CANO, es decir, si 
 *  se pueden duplicar, y llevan un contador de ataques recibidos en el caso de ser CANO
 */


class Esbirro {
    private:
        int vida;
        int ataque;
        bool cano;
        int ataquesRecibidos;
    
    public:
        /**
         * Constructor de la clase esbirro
         * 
         * Incializa un esbirro con los puntos de vida, ataque y si es CANO
         * 
         * 
         * @param puntosVida Puntos de vida iniciales del esbirro
         * @param puntosAtaque Puntos de ataque iniciales del esbirro
         * @param esCano Indica si el esbirro es CANO con TRUE, y si no FALSE
         */
        Esbirro(int puntosVida, int puntosAtaque, bool esCano);

        /**
         *  Esta función obtiene los puntos de vida actuales del esbirro
         *  @return Los puntos de vida actuales del esbirro en un entero
         */
        int getVida();
        /**
         * Esta función obtiene el ataque de un esbirro
         * @return Puntos de ataque del esbirro en un entero
         */
        int getAtaque();

        /**
         * Esta función obtiene si el esbirro es CANO o no
         * 
         * @return booleano indicando si es CANO o no
         */
        bool esCano();

        /**
         * Esta función es un contador del daño recibido en un esbirro, encargada de bajar la vida con respecto a los puntos
         * de ataque recibidos
         */
        void recibirAtaque(int puntosAtaque);

        /**
         * Esta función nos indica si el esbirro puede duplicarse, es decir, crear dos esbirros a partir del esbirro actual
         * @return TRUE si puede duplicarse, FALSE si no.
         */
        bool duplicacion();

};

#endif