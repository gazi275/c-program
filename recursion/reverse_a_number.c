#include<stdio.h>

void reverse_digit(int n){
    int rev=0;
    while(n!=0){
        int digit = n%10;
        rev=rev*10+digit;
        n/=10;
    }

    printf("%d",rev);
    
   
}


int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    reverse_digit(n);
}