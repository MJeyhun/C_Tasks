#include "ctype.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>
char c;
char text[100];
char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
char consonants[] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };
int vowelCount;
int consCount;
int VowelCounter(char arr[])
{
	int count = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		for (int j = 0; j < sizeof(vowels); j++)
		{
			if (tolower(arr[i]) == vowels[j])
			{
				count++;
			}

		}
	}
	return count;

}
int ConsCounter(char arr[])
{
	int count = 0;
	
	for (int i = 0; i < strlen(arr); i++)
	{
		
			for (int j = 0; j < sizeof(consonants); j++)
			{
				if (tolower(arr[i]) == consonants[j])
				{
					count++;
				}

			}
	}
	return count;

}
int main()
{
	Start:
	printf("Please type input sentence:\n");
	gets_s(text);


	printf("Please enter which one do you want:\nv - count vowels\nc- count consonants\nx - exit \n");
	c = _getche();
	char c1 = tolower(c);
	switch (c1)
	{
	case 'v':
		vowelCount = VowelCounter(text);
		printf("\nCount of vowels:%d\n", vowelCount);
		goto Start;
	case 'c':
		consCount = ConsCounter(text);
		printf("\nCount of consonants:%d\n", consCount);
		goto Start;
	case 'x':
		return 0;

	default:
		printf("\nPlease enter valid letter!");
		return -1;
	}



	return 0;

}