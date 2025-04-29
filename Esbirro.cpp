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
    if (cano) {
        ataquesRecibidos += 1;
    }
}

bool Esbirro::esCano(){
    return cano;
}

bool Esbirro::duplicacion(){
    // En el caso especial en que el CANO se quede a 1 de vida después del segundo ataque este muere instantáneamente al intentar duplicarse,
    // por lo que no se duplica y el dañoCausado no aumenta, ya que ese 1 de vida restante es autoinflingido por el esbirro
    // También se cubre el caso en que el esbirro muera antes de recibir dos ataques o al recibir el segundo, en cuyo caso tampoco se dividiría y moriría como un esbirro normal
    if (cano && (ataquesRecibidos == 2) && (vida - 1 > 0)) {
        return true;
    } else if (vida == 1) {
        vida = 0;
    }
    return false;

}


