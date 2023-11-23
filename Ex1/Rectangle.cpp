#include "pch.h"

using namespace std;

Rectangle::Rectangle() : Objet2D() {
}

Rectangle::Rectangle(int tdim1, int tdim2) : Objet2D(tdim1, tdim2) {
}

int Rectangle::getLongueur() {
    return this->dim1;
}

int Rectangle::getLargeur() {
    return this->dim2;
}

int Rectangle::getPerimetre() const {
    return 2 * (this->dim1 + this->dim2);
}

int Rectangle::getAire() const {
    return this->dim1 * this->dim2;
}

string Rectangle::afficheInfo() const {
    return "La longueur du rectangle est de : " + to_string(dim1) + "\nLa largeur du rectangle est de : " + to_string(dim2) + "\nLe perimetre du rectangle est de : " + to_string(getPerimetre()) + "\nL'aire du rectangle est de : " + to_string(getAire());
}