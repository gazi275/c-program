#include<stdio.h>

void sum_digit(int n){
    int sum=0;
    while(n!=0)
    {
        int digit = n%10;
        sum+=digit;
        n/=10;
    }
    printf("%d",sum);
}


int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    sum_digit(n);
}