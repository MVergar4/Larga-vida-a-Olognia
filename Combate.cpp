#include <iostream>
#include "Heroe.h"
#include "Esbirro.h"
#include "Combate.h"

Combate::Combate(int vidaHeroe, int esbirrosGenerados, int* vidaEsbirros, int* ataqueEsbirros, int* esCano){
    this->heroe = new Heroe(vidaHeroe);
    this->esbirros = std::deque<Esbirro*>();
    for (int i = 0; i < esbirrosGenerados; i++) {
        esbirros.push_back(new Esbirro(vidaEsbirros[i], ataqueEsbirros[i], esCano[i]));
    }


}
