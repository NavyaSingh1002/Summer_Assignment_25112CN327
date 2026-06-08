#include <stdio.h>
int main()
{
    int n;
    int fib(int n);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(int i=1; i<=n; i++)
    {
        printf("%d \t", fib(i));
    }
    return 0;
}

int fib(int n)
{
    int a=0, b=1, c;
    if(n==1)
        return a;
    else if(n==2)
        return b;
    for(int i=3; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}