#include<stdio.h>
union student
{
    long int roll_no;
    char name[33];
    int age;
    char courses[5][20];
};

int main(){
    union student s;
    printf("Size of long int: %ld bytes\n", sizeof(s.roll_no));
    printf("Size of char[33]: %d bytes\n", sizeof(s.name));
    printf("Size of int: %d bytes\n", sizeof(s.age));
    printf("Size of char[5][20]: %d bytes\n", sizeof(s.courses));
    printf("Size of union student: %d bytes\n", sizeof(s));

    printf("Janmejai Padney 2501030199 B4\n");
    return 0;
}