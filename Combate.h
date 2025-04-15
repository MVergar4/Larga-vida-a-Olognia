#ifndef COMBATE
#define COMBATE

#include <deque>
#include "Esbirro.h"
#include "Heroe.h"

class Combate {
    private:
        Heroe* heroe;
        std::deque<Esbirro> esbirros; //Dequeue 
   
    public:
        Combate(int vidaHeroe, int esbirrosGenerados, int* vidaEsbirros, int* ataqueEsbirros, int* esCano);
        ~Combate();
        void iniciarCombate(); // Simulacion de combate

};


#endif