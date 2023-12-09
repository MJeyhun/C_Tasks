#include <stdio.h>
#include <string.h>

int main()
{
	char Text[80];

	printf("Please enter text value:");
	gets_s(Text);

	char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
	int countVowels = 0;

	
	for (int i = 0; i < strlen(Text); i++) 
	{
		for (int j = 0; j < sizeof(vowels); j++) 
		{
			if (Text[i] == vowels[j]) 
			{
				countVowels++;
			}
		}
	}
	printf("Count of vowels:%d", countVowels);
	



	return 0;
}