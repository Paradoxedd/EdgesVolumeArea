#include "Cube.h"
#include <cmath>

void Cube::setEdgeLength(double newEdgeLength)
{
	edgeLength = newEdgeLength;
}

double Cube::getEdgeLength()
{
	return edgeLength;
}

Cube::Cube()
{
	edgeLength = 0;
}

Cube::Cube(double paramEdgeLength)
{
	edgeLength = paramEdgeLength;
}

double Cube::calculateSurfaceArea()
{ 
	double area = 0;

	area = 6 * pow(edgeLength, 2);

	return area;
}

double Cube::calculateVolume()
{
	double volume = 0;

	volume = pow(edgeLength, 3);

	return volume;
}
