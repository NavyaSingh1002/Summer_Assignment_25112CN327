#include <stdio.h>
int main()
{
    int n, c=0, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
    return 0;
}
