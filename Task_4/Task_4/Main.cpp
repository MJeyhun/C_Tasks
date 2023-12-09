#include <stdio.h>
#include "stdlib.h"

void main() {
	
	
	for (int i = 1; i <= 50; i++) {
		int r = rand();
		if (r < 500) {
			printf("%d \n", r);
		}
		
	}
}