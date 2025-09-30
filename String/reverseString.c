#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[100];
    scanf("%s",A);
    int len=strlen(A);
   for(int i=len-1;i>=0;i--)
   {
       printf("%c",A[i]);
   }
    return 0;
}