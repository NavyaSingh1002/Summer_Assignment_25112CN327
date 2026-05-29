#include <stdio.h>
int main()
{
    int n, s, rev=0, d, n1;
    printf("Enter a number: ");
    scanf("%d", &n);
    n1=n;
    while(n1>0)
    {
        d=n1%10;
        rev=rev*10+d;
        n1=n1/10;
    }
    if(rev==n)
        printf("%d is a palindrome number.", n);
    else
        printf("%d is not a palindrome number.", n);
    return 0;
}