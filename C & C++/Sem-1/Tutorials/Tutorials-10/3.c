#include <stdio.h>
int fibo(int i)
{
    if (i == 1)
        return 0;
    else if (i == 2)
        return 1;
    else
        return fibo(i - 1) + fibo(i - 2);
}

int main()
{
    int n;
    printf("Enter the number of terms in fibo series: ");
    scanf("%d", &n);
    printf("fibo series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}