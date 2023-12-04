#include "Point2D.h"
#include <iostream>
using namespace std;
Point2D::Point2D()
{
	x = 1;
	y = 2;

}

Point2D::~Point2D()
{
}

void Point2D::SetXY(int abscisse, int ordonnee)
{
	x = abscisse; 
	y = ordonnee; 
}

void Point2D::Deplace(int Dx, int Dy)
{
	x = x + Dx;
	y = y + Dy;	

}

void Point2D::Affiche()
{
	cout << " le Point2D se trouve en x :" << x << "et en y :" << y << endl;
}

