#include <stdio.h>
#include <stdlib.h>

int RandVal[100];
bool success;
int GetRandArray(int a)
{
	int max = 0;
	if (a <= 0 || a > 100) 
	{
		success = false;
		a = 1;
	}
	else {
		success = true;
	}
	for (int i = 0; i < a; i++)
	{
		RandVal[i] = rand();
		if (RandVal[i] > max) 
		{
			max = RandVal[i];
		}
	}

	return max;
}
int main() 
{
	char inp[3];
	gets_s(inp);
	int numb = atoi(inp);
	int max = GetRandArray(numb);
	if(!success)
	{
		printf("Please enter value between 1-100");
		return -1;
	}
	for (int i = 0; i < numb; i++) 
	{
		printf("%d\n", RandVal[i]);
	}
	printf("Max of them:%d", max);

	return 0;
}