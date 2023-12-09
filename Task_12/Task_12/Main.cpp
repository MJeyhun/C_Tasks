#include <stdio.h>

int MaxOfThree(int a, int b, int c)
{
	if (a >= b && a>=c) 
	{
		return a;

	}
	else if (b >= a && b >= c) 
	{
		return b;
	}
	else 
	{
		return c;
	}
}

int main() 
{
	int max = MaxOfThree(9, 5, 9);
	printf("Max:%d", max);
	return 0;
}
