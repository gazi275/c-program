#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int len=strlen(a);
    int vcount=0;
    int ccount=0;for(int i=0;i<len;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            vcount++;
        }
        else{
            ccount++;
        }
    }
    printf("Vowels: %d\n",vcount);
    printf("Consonants: %d\n",ccount);
}