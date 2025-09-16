#include<stdio.h>

    int main(){
    int a,b;
    printf("Enter numbers to operate - ");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Enter operation to perform - ");
    char op;
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        printf("%d %c %d = %d", a, op, b, a+b);
        break;

    case '-':
        printf("%d %c %d = %d", a, op, b, a-b);
        break;

    case '*':
        printf("%d %c %d = %d", a, op, b, a*b);
        break;

    case '/':
        printf("%d %c %d = %d", a, op, b, a /b);
        break;
    
    default:
        printf("Enter valid operations - ");
        break;
    }
    printf("\n\nJanmejai Pandey JEG254252 B4");
    return 0;
}