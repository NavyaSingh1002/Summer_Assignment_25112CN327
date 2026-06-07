#include <stdio.h>
int main()
{
    int n, c=0, d;;
    int dectobin(int n);
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    n=dectobin(n);
    while(n>0)
    {
        d=n%10;
        if(d==1)
            c++;
        n=n/10;
    }
    printf("Number of set bits = %d", c);
    return 0;
}

int dectobin(int n)
{
    if(n==0)
        return 0;
    return n%2 + 10*dectobin(n/2);
}