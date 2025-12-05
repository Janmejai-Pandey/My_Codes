#include <stdio.h>
void winner_finder(int gf1, int ga1, int p1, int gf2, int ga2, int p2)
{
    if (p1 > p2)
    {
        printf("Team 1 wins");
    }
    else if (p2 > p1)
    {
        printf("Team 2 wins");
    }
    else
    {
        int gd1 = gf1 - ga1;
        int gd2 = gf2 - ga2;
        if (gd1 > gd2)
        {
            printf("Team 1 wins");
        }
        else if (gd2 > gd1)
        {
            printf("Team 2 wins");
        }
        else
        {
            printf("Need tie breaker");
        }
    }
}

int main()
{
    int gf1, ga1, p1;
    int gf2, ga2, p2;

    printf("Enter GF, GA and points for Team 1: ");
    scanf("%d %d %d", &gf1, &ga1, &p1);

    printf("Enter GF, GA and points for Team 2: ");
    scanf("%d %d %d", &gf2, &ga2, &p2);

    winner_finder(gf1, ga1, p1, gf2, ga2, p2);

    printf("\nJanmejai Pandey - 2501030199 - B4");
    return 0;
}