#include <stdio.h>
int main()
{
    int n;
    int perfect(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    if(perfect(n)==1)
        printf("%d is a perfect number.", n);
    else
        printf("%d is not a perfect number.", n);
    return 0;
}

int perfect(int n)
{
    int s=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
            s+=i;
    }
    if(s==n)
        return 1;
    return 0;
}