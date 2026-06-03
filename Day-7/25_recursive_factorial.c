#include <stdio.h>
int main()
{
    int n;
    int fact(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, fact(n));
    return 0;
}

int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
