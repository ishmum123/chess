#include <string>

struct Position {

};

struct Move {

};

struct Name {

};

struct Image {

};

struct Colour {

};

class IPiece {
protected:
	virtual int getValue() = 0;
	virtual Position getPosition() = 0;
	virtual Name getName() = 0;
	virtual Image getImage() = 0;
};

class ISquare {
protected:
	virtual Colour getColour() = 0;
	virtual Position getPosition() = 0;
};