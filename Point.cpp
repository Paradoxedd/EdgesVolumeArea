#include "Point.h"
#include <math.h>

void Point::setX1(int newX1)
{
	x1 = newX1;
}

void Point::setY1(int newY1)
{
	y1 = newY1;
}

int Point::getX1()
{
	return x1;
}

int Point::getY1()
{
	return y1;
}

Point::Point()
{
	x1 = 0;
	y1 = 0;
}

Point::Point(int pointX1, int pointY1)
{
	x1 = pointX1;
	y1 = pointY1;
}

double Point::calculateDistanceFromOrigin()
{
	int origin = 0;
	double distance = 0;

	distance = sqrt(pow(x1 - origin, 2) + pow(y1 - origin, 2));

	return distance;
}
