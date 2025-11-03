#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int n=10;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(A[i]>A[j]){
                int temp =A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
   for (int i = 0; i < n; i++)
   {
       printf("%d ", A[i]);
   }
   printf("\n");
   return 0;
}