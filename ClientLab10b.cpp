#include <iostream>
#include "Cube.h"
#include "Point.h"
#include "Rectangle.h"



using namespace std;

int main()
{
	Cube Rubiks(3);
	
	cout << "The Rubik Cube's edge length is: " << Rubiks.getEdgeLength() << endl;
	cout << "The surface area is: " << Rubiks.calculateSurfaceArea() << "     and the volume is: " << Rubiks.calculateVolume() << endl << endl;

	Cube Game;

	Game.setEdgeLength(5);

	cout << "The Game Cube's edge length is: " << Game.getEdgeLength() << endl;
	cout << "The surface area is: " << Game.calculateSurfaceArea() << "     and the volume is: " << Game.calculateVolume() << endl << endl;

	Point Dot(6, 9);

	cout << "The point where the Dot is located is: (" << Dot.getX1() << ", " << Dot.getY1() << ")" << endl;
	cout << "The distance between the Dot and the origin is: " << Dot.calculateDistanceFromOrigin() << endl << endl;

	Point Mark;

	Mark.setX1(2);
	Mark.setY1(4);

	cout << "The point where the Mark is located is: (" << Mark.getX1() << ", " << Mark.getY1() << ")" << endl;
	cout << "The distance between the Mark and the origin is: " << Mark.calculateDistanceFromOrigin() << endl << endl;

	Rectangle LongSquare(2, 8);

	cout << "The long square's stats are: L: " << LongSquare.getLength() << " W: " << LongSquare.getWidth() << endl;
	cout << "The area is: " << LongSquare.calculateArea() << endl;
	cout << "The perimeter is: " << LongSquare.calculatePerimeter() << endl << endl;

	Rectangle StraightParallelogram;

	StraightParallelogram.setLength(6);
	StraightParallelogram.setWidth(8);

	cout << "The straight parallelogram's stats are: L: " << StraightParallelogram.getLength() << " W: " << StraightParallelogram.getWidth() << endl;
	cout << "The area is: " << StraightParallelogram.calculateArea() << endl;
	cout << "The perimeter is: " << StraightParallelogram.calculatePerimeter() << endl;
}