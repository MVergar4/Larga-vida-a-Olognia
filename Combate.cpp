#include <iostream>
#include "Heroe.h"
#include "Esbirro.h"
#include "EsbirroCano.h"
#include "Combate.h"

Combate::Combate(int vidaHeroe, int esbirrosGenerados, int* vidaEsbirros, int* ataqueEsbirros, int* esCano){
    this->heroe = new Heroe(vidaHeroe);
    this->esbirros = std::deque<Esbirro>();
    for (int i = 0; i < esbirrosGenerados; i++) {
        if(esCano[i]){
            esbirros.push_back(EsbirroCano(vidaEsbirros[i], ataqueEsbirros[i]));
        }else {
            esbirros.push_back(Esbirro(vidaEsbirros[i], ataqueEsbirros[i]));
        }
    }
}

void Combate::iniciarCombate(){

}
