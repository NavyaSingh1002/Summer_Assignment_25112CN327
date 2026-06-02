#include <stdio.h>
int main()
{
    int n;
    int dectobin(int n);
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary Number = %d", dectobin(n));
    return 0;
}

int dectobin(int n)
{
    if(n==0)
        return 0;
    return n%2 + 10*dectobin(n/2);
}
