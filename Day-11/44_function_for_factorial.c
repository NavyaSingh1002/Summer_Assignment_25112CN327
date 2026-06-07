#include <stdio.h>
int main()
{
    int n;
    int fact(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}

int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}