#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char s[n][200];
    printf("Enter words: ");
    for(int i=0; i<n; i++)
    {
        scanf("%s", s[i]);
    }
    //bubble sort
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((strlen(s[i])>strlen(s[j])) || (strlen(s[i])==strlen(s[j]) && strcmp(s[i], s[j])>0))
            {
                char temp[100];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Sorted words: ");
    for(int i=0; i<n; i++)
    {
        printf("\n%s", s[i]);
    }
    return 0;
}