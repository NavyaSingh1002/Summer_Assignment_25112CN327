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
        freq[s[i]]++;
    }
    printf("Charcter Frequencies: ");
    for(int i=0; i<256; i++)
    {
        if(freq[i]>0)
            printf("\n%c = %d", i, freq[i]);
    }
    return 0;
}