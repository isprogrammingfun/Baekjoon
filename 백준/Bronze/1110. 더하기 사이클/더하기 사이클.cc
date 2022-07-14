#include <stdio.h>
int main (void)
{
    int n;
    int n1;
    int count = 0;
    scanf("%d", &n);
    n1 = n;
    do
    {
       n1 = (n1 % 10) * 10 + (n1 / 10 + n1 % 10) % 10;
        count++;
    }while(n != n1);
    printf("%d", count);
}