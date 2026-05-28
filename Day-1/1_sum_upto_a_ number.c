#include <stdio.h>
int main()
{
    int n, i, s=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        s=s+i;
    }
    printf("Sum of numbers= %d", s);
    return 0;
}
