#include<stdio.h>

int stars(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + stars(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);

    int result = stars(num);
    printf("Sum of %d stars is %d", num, result);
    return 0;
}