#include <iostream>
#include "Heroe.h"

using namespace std;

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
    vida -= dañoRecibido;
}

void Heroe::aumentarExperiencia() {
    machineLearning++;
    if (machineLearning == 5) {
        ataque++;
        machineLearning = 0;
    }
}