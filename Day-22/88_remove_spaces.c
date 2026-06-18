#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int j=0;;
    printf("Enter sentence: ");
    scanf("%[^\n]", s);
    int i=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]!=' ')
        {
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
    printf("String after removing spaces: %s", s);
    return 0;
}