#include<stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  scanf("%d",&n);
  int A[n];
for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}

int pos;
scanf("%d",&pos);

for(int i=pos-1;i<n;i++){
    A[i]=A[i+1];
}
for(int i=0;i<n-1;i++){
    printf("%d ",A[i]);
}
    return 0;
}
