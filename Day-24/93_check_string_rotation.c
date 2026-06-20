#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);
    if(strlen(a)!=strlen(b))
    {
        printf("Strings aare not roatation of each other.");
        return 0;
    }
    char temp[100];
    strcpy(temp, a);
    strcat(temp, a);
    if(strstr(temp, b)!=NULL)
        printf("Strings are rotation of each other.");
    else    
        printf("Strings are not rotation of each other.");
    return 0;
}
