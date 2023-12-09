#include <stdio.h>
#include <string.h>
int main() 
{
	char Text[80];
	int countlowera = 0;
	int countuppa = 0;
	printf("Please enter the text:");
	gets_s(Text);
	for (int i = 0; i < strlen(Text); i++) {
		if (!((Text[i] <= 'z' && Text[i] >= 'a') || (Text[i] <= 'Z' && Text[i] >= 'A'))) 
		{
			printf("Illegal input! The text should be filled with letters which exist in English alphabet!");
			return -1;
		}
		if (Text[i] == 'a') 
		{
			countlowera++;
		}
		else if (Text[i] == 'A') 
		{
			countuppa++;
		}

	}
	printf("The number of a:%d\nThe number of A:%d", countlowera, countuppa);

	
}