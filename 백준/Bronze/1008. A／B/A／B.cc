#include<stdio.h>
int main (void)
{
    double n1,n2,result;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    result = n1 / n2;
    printf("%.9f\n", result);
}