#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int m;
    scanf("%d",&m);
    int B[m];
    int ans[n+m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }
    for(int i=0;i<n;i++)
    {
        ans[i]=A[i];
    }

    for(int i=n;i<n+m;i++)
    {
        ans[i]=B[i-n];
    }


    for(int i=0;i<n+m;i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
    }