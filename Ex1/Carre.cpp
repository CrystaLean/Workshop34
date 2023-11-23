#include "pch.h"

using namespace std;

Carre::Carre() : Rectangle() {
}

Carre::Carre(int tcote) : Rectangle(tcote, tcote) {
}

int Carre::getCote() {
    return this->dim1;
}

int Carre::getPerimetre() const {
    return 4 * this->dim1;
}

int Carre::getAire() const {
    return this->dim1 * this->dim1;
}

string Carre::afficheInfo() const {
    return "La longueur d'un cote du carre est de : " + to_string(dim1) + "\nLe perimetre du carre est de : " + to_string(getPerimetre()) + "\nL'aire du carre est de : " + to_string(getAire());
}