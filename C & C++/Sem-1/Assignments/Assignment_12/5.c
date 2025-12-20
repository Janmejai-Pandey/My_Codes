#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings:");
    scanf("%d", &n);

    char *arr[n];
    char str[100];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        getchar();
        scanf("%[^\n]", str);
        arr[i] = (char *)malloc((strlen(str) + 1) * sizeof(char));
        strcpy(arr[i], str);
    }

    printf("Entered Strings:\n");
    for (int i = 0; i < n; i++) {
        puts(arr[i]);
        free(arr[i]);
    }

    printf("\nJanmejai Pandey - 2501030199 - B4");
    return 0;
}