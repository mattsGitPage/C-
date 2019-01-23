// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "ShapeClient.h"

using namespace ShapeClient;
using namespace std;


int main()
{
	std::cout << "Hello World!\n";
	Square square(2, 4, 4);
	Triangle triangle(2, 3);

	double squareArea = square.CalculateArea();
	double triangleArea = triangle.CalculateArea();

	cout << "the square area is " << (squareArea) << endl;
	cout << "the triangle area is " << (triangleArea) << endl;

}