#include <stdio.h>
int main()
{
    int l, h, n1, n2, s, d, c, t, i, j;
    printf("Enter lower limit: ");
    scanf("%d", &l);
    printf("Enter upper limit: ");
    scanf("%d", &h);
    printf("Armstrong numbers between %d and %d are: ", l, h);
    for(i=l; i<=h; i++)
    {
        s=0;
        c=0;
        n1=n2=i;
        while(n1>0)
        {
            n1=n1/10;
            c++;
        }
    
        while(n2>0)
        {
            d=n2%10;
            t=1;
            for(j=1; j<=c; j++)
            {
                t=t*d;
            }
            s=s+t;
            n2=n2/10;
        }
        if(s==i)
            printf("\n%d ", i);
    }
    return 0;
}