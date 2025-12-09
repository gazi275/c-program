#include<stdio.h>

void fibonacci(int a,int b,int n){
    if(n==0) return;
    printf(" %d",a);
    fibonacci(b,a+b,n-1);

}


int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    fibonacci(0,1,n);
}

    