// SinCosTanCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "ctype.h"
#include "string.h"
#include "math.h"



int main()
{
	
	double PI = 3.14159265358979323846264338327950288419716939937510582097494;
	int repeatFig = 0;
	
	while (repeatFig == 0){
		char calc[4];
		double X = 0, Y = 0, answer = 0;

		printf("Enter calculation using degrees, e.g. \"cos 45\" \n");

		scanf_s("%s %lf", calc, 4, &X);
		while (getchar() != '\n');

		Y = X * (PI / 180); // degrees to radians

		//Sin
		if (!strcmp("sin", calc)) {
			answer = sin(Y);
			printf("Sin(%lf) = %f \n", X, answer);
		}
		//Cos
		else if (!strcmp("cos", calc)) {
			answer = cos(Y);
			printf("Cos(%lf) = %fl \n", X, answer);
		}
		//Tan
		else if (!strcmp("tan", calc)) {
			answer = tan(Y);
			printf("Tan(%lf) = %fl \n", X, answer);
		}
		//Incorrect
		else {
			printf("Plese enter Sin, Cos or Tan \n");
		}

	printf("Another calculation? (yes:0 / no:1) : ");
	scanf_s("%d", &repeatFig);	
  } 
}


