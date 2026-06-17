#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
        i++;
    }
    printf("New string: %s", s);
    return 0;
}