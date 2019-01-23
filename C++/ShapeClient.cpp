#include <iostream> // header in standard library
#include "ShapeClient.h"


using namespace ShapeClient;


double Square::CalculateArea()
{
	return this->height * this->length;
}

double Triangle::CalculateArea()
{
	return (this->length * this->height) / 2;
}