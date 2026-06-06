#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf("  ");
        }
        for(char j='A'; j<='A'+i; j++)
        {
            printf("%c ", j);
        }
        for(char j='A'+i-1; j>='A'; j--)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}