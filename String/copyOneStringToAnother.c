#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[100];
    char B[100];
    fgets(A, sizeof(A), stdin);
    for (int i = 0; A[i] != '\0'; i++)
    {
        B[i] = A[i];
    }
    printf("%s", B);
}
