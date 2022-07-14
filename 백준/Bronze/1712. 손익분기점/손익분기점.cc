#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n1, n2, n3;
    int i = 1;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n3 <= n2)
        printf("-1");
    else
    {
       // while (n1 + (n2 * i) >= (n3 * i))
         //   i++; i를 증가시키는 방법은 위험 다른방법을 생각
        if(n1 / (n3 - n2) > (double)(n1 / (n3 - n2)))
        printf("%d", n1 / (n3 - n2));
        else
        printf("%d", n1 / (n3 - n2) + 1);
    }
}