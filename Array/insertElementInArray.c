#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]); 
    }
    int x;
    scanf("%d",&x);
    int pos;
    scanf("%d",&pos);
    for(int i=n;i>=pos;i--)
    {
        A[i]=A[i-1];
    }
    A[pos-1]=x;
    for(int i=0;i<n+1;i++)
    {
      printf("%d ",A[i]);
      
    }

    return 0;
}  