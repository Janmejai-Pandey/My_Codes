// A record contains name of cricketer, his age, number of test matches that he has
// played and the average runs that he has scored in each test match. Create an array of
// structure to hold records of 20 such cricketer and then write a program to read these
// records and arrange them in ascending order by average runs.

#include <stdio.h>

typedef struct
{
    char name[50];
    int age;
    int testMatches;
    float averageRuns;
}cricketer;

void sort(cricketer *players, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (players[j].averageRuns > players[j + 1].averageRuns)
            {
                cricketer temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

int main()
{
    cricketer players[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Enter details for Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", players[i].name);

        printf("Age: ");
        scanf("%d", &players[i].age);

        printf("Number of Test Matches: ");
        scanf("%d", &players[i].testMatches);

        printf("Average Runs: ");
        scanf("%f", &players[i].averageRuns);
    }

    sort(players, 20);

    printf("\nCricketers sorted by Average Runs (Ascending Order):\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Cricketer %d:\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Age: %d\n", players[i].age);
        printf("Number of Test Matches: %d\n", players[i].testMatches);
        printf("Average Runs: %.2f\n\n", players[i].averageRuns);
    }

    printf("Janmejai Pandey - 2501030199 - B4\n");
    return 0;
}