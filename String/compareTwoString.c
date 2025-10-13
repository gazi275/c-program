#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[1001];
    scanf("%s", A);
    char B[1001];
    scanf("%s", B);
    int flag = 0;
    int i;
    for ( i = 0; A[i] != '\0' || B[i] != '\0'; i++)
    {
        if (A[i] != B[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        if(A[i]>B[i]){
            printf("%s",B);
        }
        else if(A[i]<B[i]){
            printf("%s",A);
        }
    }
    else
    {
        printf("%s",A);
    }
}