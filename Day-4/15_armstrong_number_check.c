#include <stdio.h>
int main()
{
    int n, n1, n2, s=0, d, c=0, t, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    n1=n2=n;
    while(n1>0)
    {
        n1=n1/10;
        c++;
    }
    while(n2>0)
    {
        d=n2%10;
        t=1;
        for(i=1; i<=c; i++)
        {
            t=t*d;
        }
        s=s+t;
        n2=n2/10;
    }
    if(s==n)
        printf("%d is an armstrong number.", n);
    else
        printf("%d is not an armstrong number.", n);
    return 0;
}