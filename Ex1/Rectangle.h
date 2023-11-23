#include "pch.h"

using namespace std;

class Rectangle : public Objet2D {
private:

public:
	Rectangle();
	Rectangle(int tdim1, int tdim2);
	int getLongueur();
	int getLargeur();
	virtual int getPerimetre() const override;
	virtual int getAire() const override;
	virtual string afficheInfo() const override;
};