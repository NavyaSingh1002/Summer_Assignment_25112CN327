#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int freq[256]={0};
    int flag=1, i=0;
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);
    if(strlen(a)!=strlen(b))
    {
        printf("Strings are not anagram.");
        return 0;
    }
    for(int i=0; i<strlen(a); i++)
    {
        freq[a[i]]++;
    }
    for(int i=0; i<strlen(b); i++)
    {
        freq[b[i]]--;
    }
    for(int i=0; i<256; i++)
    {
        if(freq[i]!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Strings are anagram.");
    else
        printf("Strings are not anagram.");
    return 0;
}