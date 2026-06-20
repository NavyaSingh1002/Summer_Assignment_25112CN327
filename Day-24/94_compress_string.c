#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    printf("Compressed string: ");
    int i=0;
    while(i<strlen(s))
    {
        int c=0;
        char ch=s[i];
        while(i<strlen(s) && s[i]==ch)
        {
            c++;
            i++;
        }
        printf("%c%d", ch, c);
    }
    return 0;
}