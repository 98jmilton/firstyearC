// RandomLetter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define X 4000000


void getRandomLowercaseLetter();
int letter = 0;
int freq[26];
int maxFreq = 0;

int main()
{
	int scale = 100;

	getRandomLowercaseLetter();

	int k = 0;
	do {
		if (freq[k] > maxFreq)  maxFreq = freq[k];
		k++;
	} while (k <= 26);


	printf("Num throws = 4000, Max freq = %d, Scale = 0-40 \n\n", maxFreq);

	
	int j = 0;
	do {
		
		printf("%c %d ", j + 97, freq[j]);
		float currentFreq = freq[j];
		
		float len = 0; // lenght of *
		len = currentFreq/maxFreq;
		
		int k = 0;
		do { printf("*"); k++;} while (len*scale > k);
		printf("\n");
		
		j++;
	} while (j <= 25);
	

}

void getRandomLowercaseLetter() {
	srand(time(NULL));

	for (int i = 0; i < X; i++) {
		letter = (rand() % 26);
		freq[letter] += 1;
	}


}







