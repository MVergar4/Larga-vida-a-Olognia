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
        if (e.getVida() > heroe.getAtaque()) {
            dañoCausado += heroe.getAtaque();
        } else {
            dañoCausado += e.getVida();
        }
        e.recibirAtaque(heroe.getAtaque());
        heroe.recibirAtaque(e.getAtaque());
        if (e.esCano() && e.duplicacion()) {
            int ataque2 = e.getAtaque() - 1; // Si el CANO tenía 1 de ataque ahora tendrá 0, por lo que aguantará lo que le quede de vida, pero será inofensivo
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
        if (heroe.getVida() <= 0 && !esbirros.empty()) {
            std::cout << dañoCausado << std::endl;
            std::cout << "RIP mechón" << std::endl;
            break;
        // Como el esbirro y el mechón se atacan a la vez, existe la posibilidad de que ambos se mueran en el último ataque, esto resulta en un empate
        } else if (heroe.getVida() <= 0 && esbirros.empty()) {
            std::cout << dañoCausado << std::endl;
            std::cout << "Empate" << std::endl;
            break;
        }
        if (esbirros.empty()) {
            std::cout << dañoCausado << std::endl;
            std::cout << "EZ pizi" << std::endl;
            break;
        }
    }
}
