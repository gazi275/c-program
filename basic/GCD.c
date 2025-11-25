#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int temp; 
    while(b!=0){
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD = %d", a);
}
    
