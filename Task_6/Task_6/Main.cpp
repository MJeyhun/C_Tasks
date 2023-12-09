#include <stdio.h>
#include "stdlib.h"

void main(){
	int Rand[50];
	int max = 0;
	for (int i = 0; i < 50; i++)
	{	
		Rand[i] = rand();
		if (Rand[i] > max) {
			max = Rand[i];
		}
		
	}
	printf("Maximum value:%d",max);

}