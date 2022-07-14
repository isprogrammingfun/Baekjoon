#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < (num - i); j++)
			printf(" ");

		for(int s=i; s>0; s--)
		printf("*");

		printf("\n");
	}
	return 0;
}