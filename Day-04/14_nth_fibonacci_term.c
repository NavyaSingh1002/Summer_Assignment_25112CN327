#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a=0, b=1, c, i;
    printf("Enter term: ");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Fibonacci Term = %d", a);
        exit(0);
    }
    else if(n==2)
    {
        printf("Fibonacci Term = %d", b);
        exit(0);
    }
    for(i=3; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("Fibonacci Term = %d", c);
    return 0;
}