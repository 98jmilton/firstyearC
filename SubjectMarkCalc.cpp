// SubjectMarkCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

int main()
{

	int engMark, irishMark, mathsMark, sciMark, geogMark;

	printf("Enter English Mark:");
	scanf_s("%d", &engMark);

	printf("Enter Irish Mark:");
	scanf_s("%d", &irishMark);

	printf("Enter Maths Mark:");
	scanf_s("%d", &mathsMark);

	printf("Enter Science Mark:");
	scanf_s("%d", &sciMark);

	printf("Enter Geography Mark:");
	scanf_s("%d", &geogMark);

	float averageMark = (engMark + irishMark + mathsMark + sciMark + geogMark) / 5;

	printf("\n");

	printf("Average Mark = %.2f \n \n", averageMark);



	if (engMark >= 40) {
		printf("English Result: Pass \n", engMark);
	}
	else {
		printf("English Result: Fail \n", engMark);
	}

	if (irishMark >= 40) {
		printf("Irish Result: Pass \n", irishMark);
	}
	else {
		printf("Irish Result: Fail \n", irishMark);
	}

	if (mathsMark >= 40) {
		printf("Maths Result: Pass \n", mathsMark);
	}
	else {
		printf("Maths Result: Fail \n", mathsMark);
	}

	if (sciMark >= 40) {
		printf("Science Result: Pass \n", sciMark);
	}
	else {
		printf("Science Result: Fail \n", sciMark);
	}

	if (geogMark >= 40) {
		printf("Geography Result: Pass \n", geogMark);
	}
	else {
		printf("Geography Result: Fail \n", geogMark);
	}

	printf("\n \n");


	if (engMark > irishMark &&
		engMark > mathsMark &&
		engMark > sciMark &&
		engMark > geogMark)
	{
		printf("Highest mark = %.2d in English \n", engMark);
	}

	if (irishMark > engMark &&
		irishMark > mathsMark &&
		irishMark > sciMark &&
		irishMark > geogMark)
	{
		printf("Highest mark = %.2d in Irish \n", irishMark);
	}

	if (mathsMark > engMark &&
		mathsMark > mathsMark &&
		mathsMark > sciMark &&
		mathsMark > geogMark)
	{
		printf("Highest mark = %.2d in Maths \n", mathsMark);
	}

	if (sciMark > engMark &&
		sciMark > mathsMark &&
		sciMark > irishMark &&
		sciMark > geogMark)
	{
		printf("Highest mark = %.2d in Science \n", sciMark);
	}

	if (geogMark > engMark &&
		geogMark > mathsMark &&
		geogMark > irishMark &&
		geogMark > sciMark)
	{
		printf("Highest mark = %.2d in Geography \n", geogMark);
	}

}

