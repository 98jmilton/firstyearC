// nameReader.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include "string.h"

void main()
{
	int i, j;
	char fullName[100];
	char firstName[30], middleName[30], surname[30];
	char initial;

	printf("enter full name: ");

	gets_s(fullName);
	printf("Thank you %s\n\n", fullName);

	i = 0;
	j = 0;

		do {
			firstName[i] = fullName[i];
			i++;
		} while (fullName[i] != ' ');
		firstName[i]='\0';

		do {
			middleName[j] = fullName[i + 1];
			i++;
			j++;
		} while (fullName[i] != ' ');
		initial = middleName[0];

		j = 0;
		do {
			surname[j] = fullName[i + 1];
			i++;
			j++;
		} while (fullName[i] != '\0');
		
	printf("%s %c %s \n", firstName, initial, surname);
}


