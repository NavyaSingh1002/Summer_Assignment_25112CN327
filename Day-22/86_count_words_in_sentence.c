#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int c=1;
    printf("Enter sentence: ");
    scanf("%[^\n]", s);
    int i=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==' ')
            c++;
    }
    printf("Number of words = %d", c);
    return 0;
}