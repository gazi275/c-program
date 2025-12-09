#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 500; i++) {
        int n = i;
        while (n > 0) {
            int digit = n % 10;
            if (digit == 3) {
                count++;
            }
            n /= 10;
        }
    }

    printf("1 to 500 er moddhe digit '3' total: %d bar\n", count);

    return 0;
}
