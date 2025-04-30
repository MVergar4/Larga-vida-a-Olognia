#include <iostream>
#include "Combate.h"

int main() {

    Combate c = Combate();
    c.iniciarCombate();
    c.~Combate();

    return 0;
}