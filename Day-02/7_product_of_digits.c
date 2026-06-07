#include <stdio.h>
int main()
{
    int n, d, p=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        d=n%10;
        p=p*d;;
        n=n/10;
    }
    printf("Product of digits = %d", p);
    return 0;   
}