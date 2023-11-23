#include "pch.h"

Stockage::Stockage() : tete(nullptr), queue(nullptr) {
}

Stockage::~Stockage() {
    while (tete != nullptr) {
        Objet2D* temp = tete;
        tete = tete->getSuivant();
        delete temp;
    }
}

void Stockage::ajouterEnTete(Objet2D* objet) {
    objet->setSuivant(tete);
    tete = objet;
    if (!queue) {
        queue = tete;
    }
}

void Stockage::ajouterEnQueue(Objet2D* objet) {
    if (queue) {
        queue->setSuivant(objet);
        queue = objet;
    }
    else {
        tete = queue = objet;
    }
}

void Stockage::ajouterAIndex(Objet2D* objet, int index) {
    if (index < 0) {
        return;
    }

    if (index == 0) {
        objet->setSuivant(tete);
        tete = objet;
        if (!queue) {
            queue = tete;
        }
        return;
    }

    Objet2D* courant = tete;
    Objet2D* precedent = nullptr;
    int currentIndex = 0;

    while (courant != nullptr && currentIndex < index) {
        precedent = courant;
        courant = courant->getSuivant();
        currentIndex++;
    }

    if (currentIndex == index) {
        objet->setSuivant(courant);
        precedent->setSuivant(objet);

        if (courant == nullptr) {
            queue = objet;
        }
    }
    else {
        if (queue) {
            queue->setSuivant(objet);
            queue = objet;
        }
        else {
            tete = queue = objet;
        }
    }
}

void Stockage::supprimerEnTete() {
    if (tete) {
        Objet2D* temp = tete;
        tete = tete->getSuivant();
        delete temp;
    }
}

void Stockage::supprimerEnQueue() {
    if (tete) {
        if (tete == queue) {
            delete tete;
            tete = queue = nullptr;
        }
        else {
            Objet2D* temp = tete;
            while (temp->getSuivant() != queue) {
                temp = temp->getSuivant();
            }
            delete temp->getSuivant();
            temp->setSuivant(nullptr);
            queue = temp;
        }
    }
}

void Stockage::supprimerAIndex(int index) {
    if (index < 0) {
        return;
    }

    Objet2D* courant = tete;
    Objet2D* precedent = nullptr;
    int currentIndex = 0;

    while (courant != nullptr && currentIndex < index) {
        precedent = courant;
        courant = courant->getSuivant();
        currentIndex++;
    }

    if (currentIndex == index) {
        if (precedent != nullptr) {
            precedent->setSuivant(courant->getSuivant());
        }
        else {
            tete = courant->getSuivant();
        }

        delete courant;

        if (courant == queue) {
            queue = precedent;
        }
    }
}

void Stockage::afficherInfos() const {
    Objet2D* courant = tete;
    while (courant != nullptr) {
        std::cout << courant->afficheInfo() << std::endl;
        courant = courant->getSuivant();
        cout << "" << endl;
    }
}