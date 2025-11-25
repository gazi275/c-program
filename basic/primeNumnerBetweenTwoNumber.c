#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
    {
        int start , end;
        printf("Enter two numbers (intervals): ");
        scanf("%d %d", &start, &end);
        printf("Prime numbers between %d and %d are: \n", start, end);
        int flag=0;
        for(int i =start;i<=end;i++){
            if(i<=1){
                continue;
            }
            flag=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("%d ", i);
            }
            
        }

    }
