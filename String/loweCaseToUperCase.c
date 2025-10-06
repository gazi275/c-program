#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[26];
    scanf("%s", a);
    char b[26];
    scanf("%s", b);
    for (int i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] > b[i])
        {
            printf("1");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("-1");
            break;
        }
        else if (a[i] == b[i])
        {
            if (a[i] == '\0' && b[i] != '\0')
            {
                printf("-1");
                break;
            }
            else if (b[i] == '\0' && a[i] != '\0')
            {
                printf("1");
                break;
            }
            else
            {
                printf("0");
                
            }
        }
    }

    return 0;
}