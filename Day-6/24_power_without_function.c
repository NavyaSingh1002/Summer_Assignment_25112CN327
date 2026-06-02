#include <stdio.h>
int main()
{
    int n, m, t=1, i;
    printf("Enter base number: ");
    scanf("%d", &n);
    printf("Enter exponent: ");
    scanf("%d", &m);
    for(i=1; i<=m; i++)
    {
        t=t*n;
    }
    printf("Result = %d", t);
    return 0;
}