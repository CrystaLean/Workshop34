#include "pch.h"

using namespace std;

Objet2D::Objet2D() : suivant(nullptr), dim1(0), dim2(0) {
}

Objet2D::Objet2D(int tdim1, int tdim2) : suivant(nullptr), dim1(tdim1), dim2(tdim2) {
}

Objet2D* Objet2D::getSuivant() const {
    return suivant;
}

void Objet2D::setSuivant(Objet2D* suivant) {
    this->suivant = suivant;
}