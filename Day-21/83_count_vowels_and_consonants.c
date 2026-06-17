#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int i=0, v=0, c=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]== 'E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            v++;
        else
            c++;
        i++;
    }
    printf("Number of vowels = %d", v);
    printf("\nNumber of consonants = %d", c);
    return 0;
}