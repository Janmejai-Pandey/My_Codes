#include <stdio.h>

struct s1 {
    int a;
    float b;
    char ch;
};

union u1 {
    int a;
    float b;
    char ch;
};

int main() {
    struct s1 str;
    union u1 uni;

    printf("Enter integer, float and character for structure:\n");
    scanf("%d %f %c", &str.a, &str.b, &str.ch);

    printf("Enter integer, float and character for union:\n");
    scanf("%d %f %c", &uni.a, &uni.b, &uni.ch);

    printf("\nStructure values:\n");
    printf("Integer: %d\n", str.a);
    printf("Float: %g\n", str.b);
    printf("Character: %c\n", str.ch);
    printf("Size of structure: %d bytes\n", sizeof(str));

    printf("\nUnion values:\n");
    printf("Integer: %d\n", uni.a);
    printf("Float: %g\n", uni.b);
    printf("Character: %c\n", uni.ch);
    printf("Size of union: %d bytes\n", sizeof(uni));

    printf("\nJanmejai Pandey - 2501030199 - B4");
    return 0;
}