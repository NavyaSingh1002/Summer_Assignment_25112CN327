#include <Stdio.h>
int main()
{
    int n;
    int arm(int n);
    printf("Enter a number: ");
    scanf("%d", &n);
    if(arm(n)==1)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}

int arm(int n)
{
    int n1, n2, d, s=0, t, c=0;
    n1=n2=n;
    while(n1>0)
    {
        n1=n1/10;
        c++;
    }
    while(n2>0)
    {
        d=n2%10;
        t=1;
        for(int i=1; i<=c; i++)
        {
            t=t*d;
        }
        s=s+t;
        n2=n2/10;
    }
    if(s==n)
        return 1;
    return 0;
}