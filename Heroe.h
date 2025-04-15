#ifndef HEROE
#define HEROE

#include "Esbirro.h"

class Heroe {
    private:
        int vida;
        int ataque;
        int machineLearning;
    
    public:
        Heroe() = default;
        Heroe(int vida);
        int getVida();
        int getAtaque();
        void recibirAtaque(int dañoRecibido);
       // void atacar(Esbirro* objetivo);
        void aumentarExperiencia();
};

#endif