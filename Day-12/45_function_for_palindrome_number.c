#include <stdio.h>
int main()
{
    int n;
    int pal(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    if(pal(n)==1)
        printf("%d is a palindrome number.", n);
    else
        printf("%d is not a palindrome number.", n);
    return 0;
}

int pal(int n)
{
    int rev=0, d, n1;
    n1=n;
    while(n1>0)
    {
        d=n1%10;
        rev=rev*10+d;
        n1=n1/10;
    }
    if(rev==n)
        return 1;
    return 0;
}
