#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[100];
    scanf("%s", A);
    int count = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}