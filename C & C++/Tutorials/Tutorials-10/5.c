#include<stdio.h>

void increaseScore(int *score, int value) {
    *score += value;
}

void decreaseScore(int *score, int value) {
    *score -= value;
}

int main() {
    int P1 = 100;
    int P2 = 80;

    increaseScore(&P2, 20);
    decreaseScore(&P1, 20);

    printf("Final score of A: %d\n", P1);
    printf("Final score of B: %d\n", P2);
    return 0;
}
