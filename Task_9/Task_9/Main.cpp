#include <stdio.h>
#include "conio.h"
#include <string.h>
int main() 
{
	char text[21];
	printf("Enter characters. Press ESC to finish.\n");
	for(int i=0;i<strlen(text);i++)
	{
		
		char c = _getche();
		if (c == 27) 
		{
			text[i + 1] = '\0';
			break;
		}
		if(i==20)
		{
			text[i] = '\0';
			break;
		}
		text[i] = c;
	}

	printf("\nText:%s\n", text);


	return 0;
}