#include <stdio.h>
int main()
{
    int a, b;
    int sum (int a, int b);
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Sum = %d", sum(a, b));
    return 0;
}

int sum (int a, int b)
{
    return a+b;
}
