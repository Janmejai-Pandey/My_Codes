#include<stdio.h>

int main(){
    int var =20;
    int *ptr = &var;
    printf("ptr = %p\n",ptr);
    printf("var = %d\n",var);
    printf("*ptr = %d\n",*ptr);
}
