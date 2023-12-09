#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
	char text[80];
	printf("Please enter text that contains minimum 1 integer number:");
	gets_s(text);
	char buf[20];
	int buffNumb = 0;
	
	for (int i = 0; i < strlen(text); i++) 
	{	
		if(text[i]<='9' && text[i] >= '0')
		{
			for (i; i < strlen(text); i++) 
			{
				if (text[i] == ' ') 
				{
					break;
				}
				buf[buffNumb] = text[i];
				buffNumb++;
			}
			break;
			
		}
		
	}
	int x = atoi(buf);
	if (x % 2 == 0) 
	{
		printf("Number is even:%d", x);
	}
	else 
	{
		printf("Number is odd:%d", x);
	}
	return 0;
}