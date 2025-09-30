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
int min=A[0];
int max=A[0];

for(int i=0; i<n;i++){
    if(A[i]<min){
        min=A[i];
    }
    if(A[i]>max){
        max=A[i];
    }
}

for (int i=0;i<n;i++){
    if(A[i]==min){
        A[i]=max;
    }
    else if(A[i]==max){
        A[i]=min;
    }
}
for(int i=0;i<n;i++){
    printf("%d ",A[i]);


}
return 0;
}