// ShapeAreaCalc.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <stdio.h>
#include "math.h"

int main()
{


	int selection;

	/*triangle variables*/ float triangleBase; float triangleHeight; float triangleArea;
	/*square variables*/ float squareSide; float squArea;
	/*rectangle variables*/ float recBase; float recHeight; float recArea;
	/*parallelogram variables*/ float paraBase; float paraHeight; float paraArea;
	/*circle variables*/ float circleRadius; float circleArea;
	/*trapezium variables*/ float trapBase; float trapHeight; float trapTop; float trapArea;
	/*ellipse variables*/ float ellipseA; float ellipseB; float ellipseArea;
	/*sector variables*/ float sectorRad; float sectorAng; float sectorArea;
	
	char answer[1];


	printf("Welcome to the shape area calculator \n");
	printf(" 1 <Triangle> \n 2 <Square> \n 3 <Rectangle> \n 4 <Parallelogram> \n 5 <Circle> \n 6 <Trapezium> \n 7 <Ellipse> \n 8 <Sector> \n");
	printf("Enter Choice: ");
	scanf_s("%d", &selection);

	switch (selection)
	{
	case 1:

		printf("Please enter Base length:");
		scanf_s("%f", &triangleBase);
		printf("Please enter Vertical height:");
		scanf_s("%f", &triangleHeight);

		triangleArea = (triangleHeight * triangleBase) / 2;

		printf("Triangle Area = %f", triangleArea);
		break;


	case 2:

		printf("Please enter Square side length:");
		scanf_s(" %f", &squareSide);

		squArea = (squareSide * squareSide);

		printf("Square Area = %f", squArea);
		break;

	case 3:

		printf("Please enter Rectangle Base length: ");
		scanf_s("%f", &recBase);
		printf("Please enter Rectangle height: ");
		scanf_s("%f", &recHeight);

		recArea = recBase * recHeight;

		printf("Rectangle Area = %f", recArea);
		break;

	case 4:

		printf("Please enter Parallelogram Base length: ");
		scanf_s("%f", &paraBase);
		printf("Please enter Parallelogram Vertical height: ");
		scanf_s("%f", &paraHeight);

		paraArea = paraBase * paraHeight;

		printf("Parallelogram Area = %f", paraArea);
		break;

	case 5:

		printf("Please enter Circle Radius: ");
		scanf_s("%f", &circleRadius);

		circleArea = (circleRadius*circleRadius*(3.141592653589793238462643383279));

		printf("Circle Area = %f", circleArea);
		break;

	case 6:

		printf("Please enter Trapezium Base length: ");
		scanf_s("%f", &trapBase);
		printf("Please enter Trapezium Height: ");
		scanf_s("%f", &trapHeight);
		printf("Please enter Trapezium Top length: ");
		scanf_s("%f", &trapTop);

		trapArea = ((0.5)*(trapTop + trapBase)*trapHeight);

		printf("Trapezium Area = %f", trapArea);
		break;

	case 7:

		printf("Please enter major radius: ");
		scanf_s("%f", &ellipseA);
		printf("Please enter minor radius: ");
		scanf_s("%f", &ellipseB);

		ellipseArea = 3.141592653589793238462643383279*ellipseA*ellipseB;

		printf("Ellipse Area = %f", ellipseArea);
		break;

	case 8:

		printf("Please enter sector radius: ");
		scanf_s("%f", &sectorRad);
		printf("Please enter sector angle (in radians): ");
		scanf_s("%f", &sectorAng);

		sectorArea = (0.5)*(sectorRad*sectorRad)*sectorAng;

		printf("Sector Area = %f", sectorArea);
		break;

	default:
		printf("Please enter a valid number!");
		break;

	}

	printf("\n");
	return 0;
}