#pragma once
class Point2D
{
	int x; // d�claration d'une varibale 
	int y; // d�claration d'une varibale 
public:
	Point2D(); // constructeur 
	~Point2D(); // destructeur

	void SetXY(int abscisse, int ordonnee);
	void Deplace(int Dx, int Dy);
	void Affiche();

};



