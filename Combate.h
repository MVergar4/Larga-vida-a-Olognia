#ifndef COMBATE
#define COMBATE

#include <deque>
#include "Esbirro.h"
#include "Heroe.h"

class Combate {
    private:
        Heroe heroe;
        int dañoCausado;
        std::deque<Esbirro> esbirros; //Dequeue
   
    public:
        Combate();
        ~Combate();
        void iniciarCombate(); // Simulacion de combate

};


#endif