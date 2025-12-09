#include<stdio.h>

void print_digit(int n){
    if(n==0) return ;
     printf("%d\n",n);
    print_digit(n-1);
   
}


int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    print_digit(n);
}