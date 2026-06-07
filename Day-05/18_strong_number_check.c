#include <stdio.h>
int main()
{
    int n, i, s=0, d, n1, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    n1=n;
    while(n1>0)
    {
        d=n1%10;
        f=1;
        for(i=1; i<=d; i++)
        {
            f=f*i;
        }
        s=s+f;
        n1=n1/10;
    }
    if(s==n)
        printf("%d is a strong number.", n);
    else
        printf("%d is not a strong number.", n);
    return 0;
}