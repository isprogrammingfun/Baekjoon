#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A,B ;
	printf("");
	scanf("%d %d", &A,&B);
	if (A > B)
		printf(">\n");
	else if (A < B)
		printf("<\n");
	else
		printf("==\n");
	return 0;
}