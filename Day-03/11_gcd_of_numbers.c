#include <stdio.h>
int main()
{
    int a, b, gcd, i, min;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    min=a>b?b:a;
    for(i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of %d and %d = %d", a, b, gcd);
    return 0;
}