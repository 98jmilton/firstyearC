// NameSorter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdio.h"

void printLongestName(char names[][100], int noOfNames);
void printShortestName(char names[][100], int temp);

int main()
{
	char names[100][100], temp[100];
	int noOfNames = 0;
	int i = 0;
	
	printf("How many names are you entering? ");
	scanf_s("%d", &noOfNames);
	gets_s(temp, 100);

	for (int i = 0; i < noOfNames;i++) {
		printf("Enter name #%d:", i);
		gets_s(names[i], 100);
	}

	printLongestName(names, noOfNames);
	printShortestName(names, noOfNames);

}

void printShortestName(char names[][100], int noOfNames) {
	int length = 0;
	int shortest = 100;
	int name = 0;
	for (int i = 0; i < noOfNames; i++)
	{
		length = strlen(names[i]);
		if (length < shortest)
		{
			shortest = length;
			name = i;
		}

	}

	printf("\nShortest name (%d characters) is \"%s\" \n", shortest, names[name]);
}


void printLongestName(char names[][100], int noOfNames) {
	int length = 0;
	int longest = 0;
	int name = 0;
	for (int i = 0; i < noOfNames; i++)
	{
		length = strlen(names[i]);
		if (length > longest)
		{
			longest = length;
			name = i;
		}

	}

	printf("\nLongest name (%d characters) is \"%s\" \n", longest, names[name]);
}
