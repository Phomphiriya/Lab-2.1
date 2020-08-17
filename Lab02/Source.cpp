#include<stdio.h>
int main()
{
	int x,k = 2;
	printf("enter number:");
	scanf_s("%d", &x);
	printf("Factoring result:");
	while (x != 1)
	{
		if (x % k == 0)
		{
			printf("%d", k);
			x = x / k;
			if (x != 1)
			{
				printf("x");
			}
		}
		else k++;
	}
	return 0;
}