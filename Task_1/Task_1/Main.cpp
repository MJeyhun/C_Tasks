#include "stdio.h"
#include "stdlib.h"
#include "math.h" 

int main()
{
	double a, b, c;
	printf("Please enter first value:");
	scanf_s("%lf", &a);
	printf("Please enter second value:");
	scanf_s("%lf", &b);
	printf("Please enter third value:");
	scanf_s("%lf", &c);

	if (a == 0) {
		printf("This is not quadratic equation");
		return -1;
	}
	double discriminant = b * b - 4 * a * c;

	if (discriminant < 0)
	{
		printf("This equation has no root");
		return -1;
	}

	double root1 = (-b + sqrt(discriminant)) / (2 * a);
	double root2 = (-b - sqrt(discriminant)) / (2 * a);
	if (root1 == root2) {
		printf("The equation has only one root: %lf", root1);
	}
	else {
		printf("Root 1: %lf, Root 2: %lf", root1, root2);
	}
	
	return 0;

	
}
/*
* Sometimes, sacrifising memory can help you to reach your goals!!!
*/