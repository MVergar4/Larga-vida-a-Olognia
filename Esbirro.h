#ifndef ESBIRRO
#define ESBIRRO

#include "Heroe.h"

class Esbirro {
    private:
        int vida;
        int ataque;
        bool cano;
    
    public:
        Esbirro(int puntosVida, int puntosAtaque, bool esCano);
        ~Esbirro();
        int getVida();
        int getAtaque();
        void recibirAtaque(int puntosAtaque);
        void atacar(Heroe* objetivo);

};

#endif