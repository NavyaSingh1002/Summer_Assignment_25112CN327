#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a=0, b=1, c, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Fibonacci Series: %d", a);
        exit(0);
    }
    else if(n==2)
    {
        printf("Fibonacci Series: %d, %d", a, b);
        exit(0);
    }
    printf("Fibonacci Series: %d \t%d", a, b);
    for(i=3; i<=n; i++)
    {
        c=a+b;
        printf("\t%d", c);
        a=b;
        b=c;
    }
    return 0;
}
