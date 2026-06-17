#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int i=0, l=0;
    while(s[i]!='\0')
    {
        l++;
        i++;
    }
    printf("Length og string = %d", l);
    return 0;
}
