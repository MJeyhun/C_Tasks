#include <stdio.h>

void main() {
	int Fib[20];
	Fib[0] = 1;
	Fib[1] = 1;
	int counter = 1;
	for(int i=1;i<19;i++)
	{
		Fib[i + 1] = Fib[i] +counter;
		counter = Fib[i];
	}

	for(int j=0;j<20;j++)
	{
		printf("%d \n", Fib[j]);
	}
}