#include <stdio.h>
int main()
{
    int n, i, pf=1;
    int primefactor(int j);
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=2; i<=n; i++)
    {
        if(n%i==0 && primefactor(i)==1)
        {
            pf=i;
        }
    }
    printf("Largest prime factor of %d = %d", n, pf);
    return 0;
}

int primefactor(int i)
{
    int j;
    for(j=2; j<i; j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}