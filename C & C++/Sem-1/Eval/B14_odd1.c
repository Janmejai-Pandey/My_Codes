#include <stdio.h>

int main()
{
    int num;
    printf("Enter number - ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        // for(int j=1;j<num-i;j++){
        //     printf(" ");
        // }
        for (int j = 0; j <= i; j++)
        {
            int iFact = 1, jFact = 1, someFact = 1;
            int fact;
            for (int k = 2; k <= i; k++)
            {
                iFact *= k;
                if (k == j)
                {
                    jFact = iFact;
                }
                if (k == (i - j))
                {
                    someFact = iFact;
                }
                // printf("%d", iFact);
            }
            fact = iFact / (jFact * someFact);
            printf("%d ", fact);
        }
        printf("\n");
    }

    return 0;
}