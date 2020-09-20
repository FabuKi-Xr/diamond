#include<stdio.h>
int main()
{
	int numInput, i, j;
	scanf_s("%d", &numInput);
	for (i = 1;i <= 2 * numInput - 1;i++)
	{
		for (j = 1;j <= 2 * numInput - 1;j++)
		{
			if ((i + j >= 2 * numInput) && j - i >= 0)
			{
				printf("* ");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}