#include <stdio.h>

int toBeAdded(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n < 9)
    {
        return 9-n;
    }
    else
    {
        return toBeAdded(n - 9);
    }
}

int main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);

    int result = toBeAdded(num);
    if (result)
    {
        printf("Number to be added to be divisible by 9 is %d", result);
    }
    else
    {
        printf("The number is divisible by 9");
    }
    return 0;
}