#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[100];
    scanf("%s", A);
    int len = strlen(A);
    for (int i = 0; i < len; i++)
    {
        if (A[i] >= 'a' && A[i] <= 'z')
        {
            A[i] = A[i] - 32;
        }
    }
    printf("%s", A);
    return 0;
}