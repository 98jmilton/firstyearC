// ShapeAreaCalc2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

double answer;
double pi = 3.14159265359;
double area;

double getAreaTriangle(double a, double h) {

	answer = 0.5 * a * h;

	return answer;
}
double getAreaSquare(double a) {
	
	answer = a * a;

	return answer;
}
double getAreaRectangle(double a, double b) {
	
	answer = a * b;

	return answer;
}
double getAreaParallelogram(double a, double h) {
	
	answer = a * h;

	return answer;
}
double getAreaTrapezium(double a, double b, double h) {
	
	answer = 0.5 * (a + b) * h;

	return answer;
}
double getAreaCircle(double r) {
	
	answer = pi * r * r;

	return answer;
}
double getAreaEllipse(double a, double b) {
	
	answer = pi * a * b;

	return answer;
}
double getAreaSector(double r, double ang) {
	
	answer = 0.5 * r * r * ang;

	return answer;
}


int main()
{
	area = getAreaTriangle(10,20);
	printf("Area of Triangle (b = 10, h = 20) is %.2lf \n\n",area);

	area = getAreaSquare(20);
	printf("Area of Square (l = 20) is %.2lf \n\n",area);

	area = getAreaRectangle(10,20);
	printf("Area of Rectangle (w = 10, h = 20) is %.2lf \n\n",area);

	area = getAreaParallelogram(10,20);
	printf("Area of Parallelogram (b = 10, h = 20) is %.2lf \n\n",area);

	area = getAreaTrapezium(10,20,30);
	printf("Area of Trapezium (a = 10 b = 20, h = 30) is %.2lf \n\n",area);

	area = getAreaCircle(20);
	printf("Area of Circle (r=20) is %.2lf \n\n",area);

	area = getAreaEllipse(20,10);
	printf("Area of Ellipse (a = 20, b = 10) is %.2lf \n\n",area);

	area = getAreaSector(10,2);
	printf("Area of Sector (r = 10, theta = 2 radians) is %.2lf \n\n",area);
}


