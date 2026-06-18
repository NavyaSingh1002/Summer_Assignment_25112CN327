#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int flag=1;
    printf("Enter string: ");
    scanf("%s", s);
    int i=0, l=strlen(s)-1;
    while(i<l)
    {
        if(s[i]!=s[l])
        {
            flag=0;
            break;
        }
        i++;
        l--;
    }
    if(flag==1)
        printf("String is palindrome.");
    else
        printf("String is not palindrome.");
    return 0;
}
