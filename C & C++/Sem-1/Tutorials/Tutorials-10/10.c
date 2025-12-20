#include <stdio.h>
int multiplyEvenFactors(int n1, int n2) {
    int product = 1;

    for(int i = 2; i <= (n1>n2?n1:n2); i+=2) {
        if(n1 % i == 0 || n2 % i == 0) {
            product *= i;
        }
    }

    return product;
}

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    int result = multiplyEvenFactors(n1, n2);
    printf("%d", result);

    return 0;
}