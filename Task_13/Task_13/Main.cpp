#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <math.h.>
double TempConverter(double a, char b)
{
	if (b == 'f' || b == 'F')
	{
		double celc = (a - 32) * 5 / 9;
		return celc;
	}
	else if (b == 'c' || b == 'C') 
	{
		double faren = a * 9 / 5 + 32;
		return faren;
	}
	return NAN;

}
int main() 
{
	printf("Please enter degree is c or f:\n");
	char val = _getche();
	char value[5];
	printf("Please enter degree:");
	gets_s(value);
	double numb = atof(value);
	
	double degree = TempConverter(numb, val);
	if (isnan(degree)) 
	{
		printf("No solution");
	}
	else 
	{
		printf("Converted value:%lf\nOld value:%lf",degree,numb);
	}

}