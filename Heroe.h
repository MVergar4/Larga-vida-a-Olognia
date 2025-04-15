#ifndef HEROE
#define HEROE

class Heroe {
    private:
        int vida;
        int ataque;
        int machineLearning;
    
    public:
        Heroe(int puntos_vida);
        int getVida();
        int getAtaque();
        void recibirAtaque(int dañoRecibido);
        void aumentarExperiencia();

};

#endif