#include<stdio.h>

struct data
{
    char name[20];
    int number;
    int rank;

}d;


int main(){
    printf("Enter name, number and rank:\n");
    scanf("%s %d %d",d.name,&d.number,&d.rank);

    struct data *ptr;
    ptr = &d;

    printf("Name: %s\n",ptr->name);
    printf("Number: %d\n",ptr->number);
    printf("Rank: %d\n",ptr->rank);

    printf("\nJanmejai Pandey - 2501030199 - B4");
    return 0;
}