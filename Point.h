#pragma once

class Point
{
private:

	int x1 = 0;

	int y1 = 0;

public:

	void setX1(int newX1);

	void setY1(int newY1);

	int getX1();

	int getY1();

	Point();

	Point(int pointX1, int pointY1);

	double calculateDistanceFromOrigin();

};