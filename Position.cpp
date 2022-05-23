#include "Position.h"
int Position::getX()
{
	return x;
}
void Position::setX(int x)
{
	this->x = x;
}
int Position::getY()
{
    return y;
}
void Position::setY(int y)
{
	this->y = y;
}
//Addiert zwei Positionen indem die Attribute x und y addiert werden.

Position Position::operator+ (const Position& rhs) const {
	Position p;
	p.setX(this->x + rhs.x);
	p.setY(this->y + rhs.y);
	return p;
}
//Vergleicht zwei Position Instanzen. Gibt true zurück, falls x und y beider Instanzen identisch sind, sonst false.
bool Position::operator==(const  Position& rhs) const
{
	return (this->x == rhs.x) && (this->y == rhs.y);
}
