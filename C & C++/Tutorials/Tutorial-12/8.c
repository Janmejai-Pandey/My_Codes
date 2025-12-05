#include<stdio.h>

int countDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);

    printf("Number of digits in %d is %d\n", num, countDigits(num));
    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}