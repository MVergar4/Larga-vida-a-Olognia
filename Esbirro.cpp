#include <iostream>
#include "Esbirro.h"

/**
 * Constructor de la clase esbirro
 * 
 * Inicializa un esbirro con puntos de vida, puntos de ataque, y si es cano.
 *
 * @param puntosVida puntos de vida iniciales del esbirro
 * @param puntosAtaque puntos de ataque del esbirro
 * @param esCano determina si el esbirro es cano o no
 */

Esbirro::Esbirro(int puntosVida, int puntosAtaque, bool esCano){
    this->vida = puntosVida;
    this->ataque = puntosAtaque;
    this->cano = esCano;
    this->ataquesRecibidos = 0;
}
/**
 *  Función que obtiene la vida del esbirro
 * 
 * @return Puntos de vida actuales del esbirro
 */
int Esbirro::getVida(){
    return vida;
}
/**
 *  Función que obtiene los puntos de ataque del esbirro
 * 
 * @return Puntos de ataque actuales del esbirro
 */
int Esbirro::getAtaque(){
    return ataque;
}
/**
 *  Esta función se encarga de aplicar "daño" al esbirro reduciendo sus puntos de vida. Y en el caso 
 *  de ser cano contar los ataques recibidos.
 * 
 */
void Esbirro::recibirAtaque(int dañoRecibido){
    vida -= dañoRecibido;
    if (cano) {
        ataquesRecibidos += 1;
    }
}
/**
 * Esta función determina si esl esbirro es Cano
 * 
 * @return TRUE si es cano, y FALSE si no es cano
 * 
 */
bool Esbirro::esCano(){
    return cano;
}

/**
 *  Determina si el esbirro es cano y ha recibido los ataques suficientes para duplicarse.
 * 
 * @return TRUE si el esbirro puede duplicarse, y FALSE si no.
 */

bool Esbirro::duplicacion(){
    if (cano && (ataquesRecibidos == 2)) {
        return true;
    }
    return false;

}


