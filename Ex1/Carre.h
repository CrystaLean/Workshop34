#include "pch.h"

using namespace std;

class Carre : public Rectangle {
private:

public:
	Carre();
	Carre(int tcote);
	int getCote();
	int getPerimetre() const override;
	int getAire() const override;
	string afficheInfo() const override;
};