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

}

void Combate::iniciarCombate(){
    Esbirro e = esbirros.back();
    while(true) {
        //std::cout << "Esbirro: " << e.getVida() << std::endl;
        if (e.getVida() > heroe.getAtaque()) {
            dañoCausado += heroe.getAtaque();
        } else {
            dañoCausado += e.getVida();
        }
        e.recibirAtaque(heroe.getAtaque());
        //std::cout << "ataque: " << heroe.getAtaque() << std::endl;
        std::cout << "Esbirro: " << e.getVida() << std::endl;
        heroe.recibirAtaque(e.getAtaque());
        std::cout << "Heroe: " << heroe.getVida() << std::endl;
        if (heroe.getVida() <= 0) {
            std::cout << dañoCausado << std::endl;
            std::cout << "RIP mechón" << std::endl;
            break;
        }
        if (e.esCano() && e.duplicacion()) {
            std::cout << "cano: " << e.esCano() << std::endl;
            int ataque2 = e.getAtaque() - 1;
            int vida2 = e.getVida() - 1;
            esbirros.pop_back();
            esbirros.push_back(Esbirro(vida2, ataque2, false));
            esbirros.push_back(Esbirro(vida2, ataque2, false));
            e = esbirros.back();
        }
        if (e.getVida() <= 0) {
            esbirros.pop_back();
            e = esbirros.back();
            heroe.aumentarExperiencia();
        }
        if (esbirros.empty()) {
            std::cout << dañoCausado << std::endl;
            std::cout << "EZ pizi" << std::endl;
            break;
        }
    }
}
