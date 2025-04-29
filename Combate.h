#ifndef COMBATE
#define COMBATE

#include <deque>
#include "Esbirro.h"
#include "Heroe.h"


/**
 * Clase que representa un combate entre Heroe y esbirros
 * Permite inicializar el combate con los respectivos datos del Heroe y esbirros
 * 
 * 
 */
class Combate {
    private:
        Heroe heroe; 
        int dañoCausado;
        std::deque<Esbirro> esbirros; //Dequeue
   
    public:
        /** 
         * Constructor de la clase combate
         * Inicializa el combate entre un héroe y los esbirros. 
        */
        Combate();

        /** 
         * Ejecuta la lógica del combate junto los datos asignados de entrada mediante el constructor.
         * 
         */
        void iniciarCombate(); // Simulacion de combate

};


#endif