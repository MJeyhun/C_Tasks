#include <stdio.h>

void main() 
{
	int numb;
	printf("Please enter integer value:");
	scanf_s("%d", &numb);
	if (numb % 2 == 0) {
		printf("Number if even");
	}
	else {
		printf("Number is odd");
	}
}