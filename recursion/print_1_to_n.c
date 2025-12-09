#include<stdio.h>

void print_digit(int n){
    if(n==0) return ;
    print_digit(n-1);
    printf("%d\n",n);
}


int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    print_digit(n);
}