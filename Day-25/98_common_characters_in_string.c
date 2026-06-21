#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int freq[256]={0};
    printf("Enter string: ");
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++)
    {
        freq[s[i]]++;
    }
    printf("Common Characters: ");
    for(int i=0; i<256; i++)
    {
        if(freq[i]>1)
            printf("\n%c", i);
    }
    return 0;
}