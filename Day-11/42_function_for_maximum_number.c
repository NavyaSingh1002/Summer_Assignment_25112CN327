#include <stdio.h>
int main()
{
    int a, b;
    int max (int a, int b);
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Maximum number = %d", max(a, b));
    return 0;
}

int max(int a, int b)
{
    return (a>b) ? a : b;
}