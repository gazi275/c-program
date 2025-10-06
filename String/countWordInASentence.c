#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char A[1001];
    fgets(A, sizeof(A), stdin);
    int count = 0;
    for(int i =0;A[i]!='\0';i++){

        if(A[i]==' ' && A[i+1]!=' ' && A[i+1]!='\0'){
            count++;
        }
    }
    printf("%d\n", count+1 );
}