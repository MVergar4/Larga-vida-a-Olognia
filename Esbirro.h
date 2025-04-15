#ifndef ESBIRRO
#define ESBIRRO

#include "Heroe.h"

class Esbirro {
    private:
        int vida;
        int ataque;
        bool cano;
        int ataquesRecibidos;
    
    public:
        Esbirro(int puntosVida, int puntosAtaque, bool esCano);
        ~Esbirro();
        int getVida();
        int getAtaque();
        bool esCano();
        void recibirAtaque(int puntosAtaque);
        bool duplicacion();

        // void atacar(Heroe* objetivo);

};

#endif