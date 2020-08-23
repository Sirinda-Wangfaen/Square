#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, i, j;
	printf("Enter number : ");
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x; j++)
			if (i == 0 || i == x - 1 || j == 0 || j == x - 1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	//Test
	return 0;
}
