#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[1001];
    scanf("%s",A);
    int len=strlen(A);
    int flag=0;
   for(int i=0;i<len/2;i++)
   {
       if(A[i]!=A[len-i-1])
       {
           flag=1;
           break;
       }
   }
   if(flag==1)
   {
       printf("NO");
   }
   else
   {
       printf("YES");
   }
    return 0;
}