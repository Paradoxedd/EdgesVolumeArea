#pragma once

class Cube
{
private:

	double edgeLength = 0;

public:

	void setEdgeLength(double newEdgeLength);

	double getEdgeLength();

	Cube();

	Cube(double paramCube);

	double calculateSurfaceArea();

	double calculateVolume();

};