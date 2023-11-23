#include "pch.h"

using namespace std;

class Objet2D {
protected:
	int dim1;
	int dim2;

private:
	Objet2D* suivant;

public:
	Objet2D();
	Objet2D(int tdim1, int tdim2);
	virtual int getPerimetre() const = 0;
	virtual int getAire() const = 0;
	virtual string afficheInfo() const = 0;

	Objet2D* getSuivant() const;
	void setSuivant(Objet2D* suivant);

};