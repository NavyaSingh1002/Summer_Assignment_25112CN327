#include <stdio.h>
int main()
{
    int n;
    int sum(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sum(n));
    return 0;
}

int sum(int n)
{
    if(n==0)
        return 0;
    return n%10 + sum(n/10);
}