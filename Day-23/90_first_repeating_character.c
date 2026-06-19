#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int freq[256]={0};
    printf("Enter sentence: ");
    scanf("%[^\n]", s);
    for(int i=0; i<strlen(s); i++)
    {
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            freq[s[i]]++;
    }
    char ch;
    for(int i=0; i<strlen(s); i++)
    {
        if(freq[s[i]]>1)
        {
            ch=s[i];
            break;
        }
    }
    printf("First Repeating Character: %c", ch);
    return 0;
}