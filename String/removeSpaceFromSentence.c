#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[1001];
    fgets(A, sizeof(A), stdin);
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ')
        {
            continue;
        }
        else
        {
            printf("%c",A[i]);
        }
    }
    return 0;
}