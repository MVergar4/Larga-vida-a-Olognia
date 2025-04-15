#include <iostream>
#include "Heroe.h"



Heroe::Heroe(int vida){
    this->vida = vida;
    this->ataque = 2;
    this->machineLearning = 0;
}

int Heroe::getVida(){
    return vida;
}

int Heroe::getAtaque(){
    return ataque;
}

void Heroe::recibirAtaque(int dañoRecibido){
    int vida = getVida();
    vida -= dañoRecibido;
}
