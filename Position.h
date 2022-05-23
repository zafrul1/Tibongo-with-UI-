#ifndef POSITION
#define POSITION 
class Position
{
protected:
	int x = 0;
	int y = 0;
public:
	Position operator+ (const Position& rhs) const;
	bool operator==(const Position& rhs) const;
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);

	Position(int x = 0, int y = 0) : x(x), y(y) {};
	~Position() {};
};
#endif