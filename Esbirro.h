#ifndef ESBIRRO
#define ESBIRRO

#include "Heroe.h"

class Esbirro {
    protected:
        int vida;
        int ataque;
        
    
    public:
        Esbirro(int puntosVida, int puntosAtaque);
        ~Esbirro();
        int getVida();
        int getAtaque();
        void recibirAtaque(int puntosAtaque);
        void atacar(Heroe* objetivo);

};

#endif