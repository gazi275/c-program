#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int isPrime = 1; 
    if(n<=1){
        isPrime = 0;
    } else {
         for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                isPrime = 0;
                break;
            }
         }
         }

         if(isPrime){
             printf("%d is a prime number.\n", n);
         } else {
             printf("%d is not a prime number.\n", n);
         }
        
    }

