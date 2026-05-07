#include <stdio.h>

int main() {
    int a[5];
    int b[5];
    int c[5];
    int i;

    printf("Enter 5 elements for array a:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 elements for array b:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }

    printf("\nArray a: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    printf("\nArray b: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    printf("\nArray c (sum): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}


