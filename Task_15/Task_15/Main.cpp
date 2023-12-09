#include <stdio.h>

char Table[5][5];
void TableReturner() 
{
	for (int i = 0; i < 5; i++) 
	{
		if (i == 0) 
		{
			Table[i][0] = '*';
		}
		else if(i>0)
		{
			Table[i][0] = '-';
		}
		for (int j = 0; j < 4; j++) 
		{
			
			if (Table[i][j] == '*') 
			{
				for (int c = j + 1; c < 5; c++) 
				{
					Table[i][c] = '+';
				}
				break;
			}
			else if(Table[i][0] == '-')
			{
				Table[i][j + i] = '*';
				for(int c=0;c<j+1;c++)
				{
					Table[i][c] = '-';
				}
				
				for (int c = j+i+1; c < 5; c++) 
				{
					Table[i][c] = '+';

				}
	
						
			}
		}
	}
}

void main() 
{
	TableReturner();
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			if (j == 4) 
			{
				printf("%c\n", Table[i][j]);
				break;
			}
			printf("%c ", Table[i][j]);
		}
	}
}