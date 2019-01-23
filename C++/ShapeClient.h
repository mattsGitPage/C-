#pragma once


namespace ShapeClient
{
	class Shape
	{

	public:
		Shape(double length, double width, double height) : length(length), width(width), height(height) {}

		virtual double CalculateArea() = 0;

	protected:
		double length{ 0 };
		double width{ 0 };
		double height{ 0 };
	};

	class Square : Shape
	{
	public:
		Square(double length, double width, double height) : Shape(length, width, height) {}

		double CalculateArea();
	};

	class Triangle : Shape
	{
	public:
		Triangle(double length, double height) : Shape(length, width, height) {}

		double CalculateArea();
	};


}