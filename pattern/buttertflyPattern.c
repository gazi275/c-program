#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper part
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Spaces
        for (int space = 1; space <= 2 * (n - i); space++) {
            printf(" ");
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower part
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Spaces
        for (int space = 1; space <= 2 * (n - i); space++) {
            printf(" ");
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
