#include <iostream>
#include "Esbirro.h"

Esbirro::Esbirro(int puntosVida, int puntosAtaque, bool esCano){
    this->vida = puntosVida;
    this->ataque = puntosAtaque;
    this->cano = esCano;
    this->ataquesRecibidos = 0;
}

int Esbirro::getVida(){
    return vida;
}

int Esbirro::getAtaque(){
    return ataque;
}

void Esbirro::recibirAtaque(int dañoRecibido){
    vida -= dañoRecibido;
    ataquesRecibidos += 1;

}

bool Esbirro::esCano(){
    return cano;
}

bool Esbirro::duplicacion(){
    if(ataquesRecibidos == 2){
        return true;
    }
    return false;

}


