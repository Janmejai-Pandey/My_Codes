#include<stdio.h>

int main(){
    int var = 20;
    int *ptr = &var;
    printf("Address of var: %p\n", ptr);
    printf("Value of var: %d\n", var);
    printf("Address stored in ptr: %d\n", *ptr);
    return 0;
}