#include <stdio.h>

int findCube(int num){
    return num*num*num;
}

int main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);

    int cube = findCube(num);
    printf("Cube of %d is %d",num,cube);

    printf("\nJanmejai Pandey 2501030199 B4 \n");
    return 0;
}
