#pragma once

class Rectangle
{
private:

	double length = 0;

	double width = 0;

public:

	void setLength(double newLength);

	void setWidth(double newWidth);

	double getLength();

	double getWidth();

	Rectangle();

	Rectangle(double length, double width);

	double calculateArea();

	double calculatePerimeter();
};