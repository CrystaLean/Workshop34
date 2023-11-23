#include "pch.h"

using namespace std;

class Stockage {
private:
    Objet2D* tete;
    Objet2D* queue;

public:
    Stockage();
    ~Stockage();

    void ajouterEnTete(Objet2D* objet);
    void ajouterEnQueue(Objet2D* objet);
    void ajouterAIndex(Objet2D* objet, int index);

    void supprimerEnTete();
    void supprimerEnQueue();
    void supprimerAIndex(int index);

    void afficherInfos() const;
};