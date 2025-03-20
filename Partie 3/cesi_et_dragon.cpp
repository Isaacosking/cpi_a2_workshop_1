#include <iostream>

class Heros {
private:
    char nom;
    int vie;
    int attaque;
public:
    Heros(int vie, int attaque) : vie(vie), attaque(attaque) {}

    void attaquer(Heros &cible) {
        cible.vie -= attaque;
    }

    bool estVivant() {
        return vie > 0;
    }

    void afficher() {
        std::cout << "Vie : " << vie << " Attaque : " << attaque << std::endl;
    }

};