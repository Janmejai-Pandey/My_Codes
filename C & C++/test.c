// #include<stdio.h>

// typedef struct employee{
//     int employee_code;
//     char name[50];
//     int day;
//     int month;
//     int year;
// }e;

// int main(){
//     e emp[3];
//     printf("Enter details of 3 employees:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = num; j >= 1; j--)
//         {
//             if (i>=j)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

#include<stdio.h>
#include<string.h>

union data
{
    int a;
    float b;
    char str[20];
    char ch;
};


void main(){
    union data d;
    int last=-1;
    while(1){
        printf("Enter a choice (1- int, 2- float, 3- string, 4- char, 5- display, 6 exit): ");
        int choice;
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &d.a);
                break;
            case 2:
                printf("Enter a float: ");
                scanf("%f", &d.b);
                break;
            case 3:
                printf("Enter a string: ");
                scanf("%s", d.str);
                break;
            case 4:
                printf("Enter a character: ");
                scanf(" %c", &d.ch);
                break;
            case 5:
                if(last == -1){
                    printf("No data to display!\n");
                    break;
                }
                else if(last == 1){
                    printf("Last entered data type: Integer\n");
                    printf("Integer: %d\n", d.a);
                }
                else if(last == 2){
                    printf("Last entered data type: Float\n");
                    printf("Float: %.2f\n", d.b);
                }
                else if(last == 3){
                    printf("Last entered data type: String\n");
                    printf("String: %s\n", d.str);
                }
                else if(last == 4){
                    printf("Last entered data type: Character\n");
                    printf("Character: %c\n", d.ch);
                }
                break;
            case 6:
                return;
            default:
                printf("Invalid choice!\n");

        }
        last = choice;
    }
}