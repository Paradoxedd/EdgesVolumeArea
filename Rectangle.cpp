#include "Rectangle.h"

void Rectangle::setLength(double newLength)
{
	length = newLength;
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}

Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}

Rectangle::Rectangle(double paramLength, double paramWidth)
{
	length = paramLength;
	width = paramWidth;
}

double Rectangle::calculateArea()
{
	double area = 0;

	area = length * width;

	return area;
}

double Rectangle::calculatePerimeter()
{
	double perimeter = 0;

	perimeter = (2 * length) + (2 * width);

	return perimeter;
}
