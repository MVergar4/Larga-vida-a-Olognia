#ifndef COMBATE
#define COMBATE

#include <deque>
#include "Esbirro.h"
#include "Heroe.h"


/**
 * @class Combate
 * Clase que representa un combate entre Héroe y esbirros
 * 
 * Permite inicializar el combate con los respectivos datos del Héroe y esbirros
 */
class Combate {
    private:
        Heroe heroe; 
        int dañoCausado;
        std::deque<Esbirro> esbirros; //Dequeue
   
    public:
        /** 
         * Constructor de la clase Combate
         * Inicializa el combate entre un héroe y los esbirros. 
        */
        Combate();
        /**
         * Destructor de la clase Combate
         */
        ~Combate();

        /** 
         * Ejecuta la lógica del combate junto los datos asignados de entrada mediante el constructor.
         */
        void iniciarCombate(); // Simulación de combate

};


#endif