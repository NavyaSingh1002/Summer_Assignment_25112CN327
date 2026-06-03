#include <stdio.h>
int main()
{
    int n, i;
    int fib(int n);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i=1; i<=n; i++)
    {
        printf("\t%d", fib(i));
    }
    return 0;
}

int fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    return fib(n-1) + fib(n-2);
}