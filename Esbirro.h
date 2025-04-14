#ifndef ESBIRRO
#define ESBIRRO

class Esbirro {
    private:
        int vida;
        int ataque;
        bool cano;
    
    public:
        Esbirro(int puntosVida, int puntosAtaque, bool esCano);
        ~Esbirro();
};

#endif