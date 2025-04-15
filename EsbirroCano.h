#ifndef ESBIRROCANO
#define ESBIRROCANO
#include "Esbirro.h"


class EsbirroCano : public Esbirro {
    private:
        int ataquesRecibidos;

    public:
        EsbirroCano(int puntosVida, int puntosAtaque);
        ~EsbirroCano();
        bool duplicacion();

};





#endif