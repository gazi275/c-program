#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char A[101];
    scanf("%s",A);

    int len=strlen(A);
    if (len > 10)
    {
        printf("%c%d%c",A[0],len-2,A[len-1]);
    }
    else
    {
        
            printf("%s",A);
        
    }
    

    return 0;
}