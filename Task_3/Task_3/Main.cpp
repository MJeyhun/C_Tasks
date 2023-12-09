#include <stdio.h>

void main() {
	char text[80];
	printf("Please enter value:");
	gets_s(text);
	if (text[0] >= '0' && text[0] <= '9') {
		printf("The text starts with digit");
	}
	else if (text[0] >= 'A' && text[0] <= 'Z')
	{
		printf("The text starts with uppercase letter");
	}
	else if (text[0] >= 'a' && text[0] <= 'z') {
		printf("The text starts with lowercase letter");
	}
	else 
	{
		printf("The text starts with unidentified character");
	}

}