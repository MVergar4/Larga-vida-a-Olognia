#include <iostream>
#include "Heroe.h"
#include "Esbirro.h"
#include "Combate.h"

Combate::Combate(){
    this->dañoCausado = 0;

    int vidaHeroe;
    std::cin >> vidaHeroe;
    this->heroe = Heroe(vidaHeroe);

    int esbirrosGenerados;
    std::cin >> esbirrosGenerados;
    this->esbirros = std::deque<Esbirro>();

    int vidaEsbirros[esbirrosGenerados];
    for (int i = 0; i < esbirrosGenerados; i++) {
        std::cin >> vidaEsbirros[i];
    }
    int ataqueEsbirros[esbirrosGenerados];
    for (int i = 0; i < esbirrosGenerados; i++) {
        std::cin >> ataqueEsbirros[i];
    }
    int esCano[esbirrosGenerados];
    for (int i = 0; i < esbirrosGenerados; i++) {
        std::cin >> esCano[i];
    }

    for (int i = 0; i < esbirrosGenerados; i++) {
        esbirros.push_front(Esbirro(vidaEsbirros[i], ataqueEsbirros[i], esCano[i]));
    }

    delete[] vidaEsbirros;
    delete[] ataqueEsbirros;
    delete[] esCano;
}

void Combate::iniciarCombate(){
    while(true) {
        Esbirro e = esbirros.back();
        e.recibirAtaque(heroe.getAtaque());
        if (e.esCano() && e.duplicacion()) {
            int ataque2 = e.getAtaque() - 1;
            int vida2 = e.getVida() - 1;
            esbirros.pop_back();
            esbirros.push_back(Esbirro(vida2, ataque2, false));
            esbirros.push_back(Esbirro(vida2, ataque2, false));
        }
        if (e.getVida() <= 0) {
            dañoCausado = e.getVida();
            esbirros.pop_back();
            heroe.aumentarExperiencia();
        } else {
            dañoCausado = heroe.getAtaque();
        }
        heroe.recibirAtaque(e.getAtaque());
        if (heroe.getVida() <= 0) {
            std::cout << "RIP mechón" << std::endl;
            break;
        }
        if (esbirros.empty()) {
            std::cout << "EZ pizi" << std::endl;
            break;
        }
    }
}
