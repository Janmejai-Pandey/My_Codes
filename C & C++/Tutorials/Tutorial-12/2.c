// Given an array arr of size n, it can be either integer array or a string. Print all
// permutations of the array or string in any arbitrary order. Develop the recursive approach and
// then write the C program.

#include <stdio.h>
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int s, int l)
{
    int i;
    if (s == l)
        printf("%s\n", a);
    else
    {
        for (i = s; i <= l; i++)
        {
            swap((a + s), (a + i));
            permute(a, s + 1, l);
            swap((a + s), (a + i)); 
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string - ");
    scanf("%s", str);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    permute(str, 0, len - 1);
    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}