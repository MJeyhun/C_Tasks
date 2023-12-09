#include <stdio.h>
#include "conio.h"
#include <string.h>
int main()
{
	int counters[6] = { 0,0,0,0,0,0 };
	int vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };
	printf("Please enter characters:");
	for (int i = 0; i < 100; i++)
	{
		char c = _getche();
		if (c == '\r')
		{
			break;
		}
		for (int j = 0; j < 6; j++)
		{
			if (c == vowels[j])
			{
				counters[j]++;
			}
		}
	}
	for (int i = 0; i < 6; i++) 
	{
		printf("%c: %d\n", vowels[i], counters[i]);
	}
	
	return 0;

}