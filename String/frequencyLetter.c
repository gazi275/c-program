#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[100];
    scanf("%s", A);
    int frq[256] = {0};
    for(int i=0;A[i]!='\0';i++)
    {
        frq[A[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(frq[i]>0)
        {
            printf("%c %d\n",i,frq[i]);
        }
    }
}