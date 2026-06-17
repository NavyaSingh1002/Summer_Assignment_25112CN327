#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int i=0, l=strlen(s)-1;
    while(i<l)
    {
        char t=s[i];
        s[i]=s[l];
        s[l]=t;
        i++;
        l--;
    }
    printf("Reversed string: %s", s);
    return 0;
}