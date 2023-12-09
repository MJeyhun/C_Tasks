#include <stdio.h>
#include <string.h>

char Buf1[81], Buf2[81];

void SpaceRemover()
{
	int checker = 0;
	for (int i = 0; i < strlen(Buf1); i++)
	{ 
		
		
		for(int j=checker;j< strlen(Buf1);j++)
		{
		
			if (Buf1[j] == ' ')
			{
				if (Buf1[j + 1] != ' ')
				{
					Buf2[i] = Buf1[j];
					checker = j+1;
					break;
				
				}
			}
			else 
			{
				Buf2[i] = Buf1[j];
				checker = j+1;
				break;
			}
		}
		
		
	}

	Buf2[strlen(Buf2) + 1] = '\0';
}

void main() 
{

	gets_s(Buf1);
	SpaceRemover();
	printf("Old text:%s\n", Buf1);
	printf("new text:%s\n", Buf2);
}