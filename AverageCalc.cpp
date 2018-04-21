// AverageCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
double numbers[10] = {}; // array of numbers
int numNumbers = 10; //number of numbers
double sum, average; // variables for average calculation
double max, min; // variables for largest and smallest number
int main()
{	printf("Program to calculate average, min and max of up to 10 floating point numbers! \nPlease enter up to 10 numbers <use 0.0 to end input> \n");
	for (int i = 0; i <= 9; i++) {
		printf("#%d: ", i + 1);
		scanf_s("%lf", &numbers[i]);
		if (numbers[0] == 0) { printf("No numbers entered - Quitting \n"); exit(0); }
		if (numbers[i] == 0.0) { numNumbers = i; break; }
		if (i == 0) { max = numbers[i]; min = numbers[i]; }
		if (max < numbers[i]) { max = numbers[i]; }
		if (min > numbers[i]) { min = numbers[i]; }}
	for (int j = 0; j <= 9; j++) {sum = sum + numbers[j];}
	average = sum / numNumbers;
	printf("Average: %lf \n", average);
	printf("Max number: %lf \n", max);
	printf("Min number: %lf \n", min);}