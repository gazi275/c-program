#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    int sum=0;
    while (n!=0)
    {
        int fact =1;
        int digit = n % 10;
        printf("%d\n", digit);
        for(int i=1;i<=digit;i++){
            fact = fact * i;
         }
        sum = sum + fact;

        
        n = n / 10;

    }
    if(sum == temp){
        printf("%d is a strong number", temp);
    } else {
        printf("%d is not a strong number", temp);
    }
        /* code */
    }
    
