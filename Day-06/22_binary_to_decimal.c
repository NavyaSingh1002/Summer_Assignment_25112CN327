#include <stdio.h>
int main()
{
    int n, s=0, d, i, n1, c=0, j, t;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    n1=n;
    while(n1>0)
    {
      n1=n1/10;
      c++;
    }    
    for(i=0; i<c; i++)
    {
        d=n%10;
        t=1;
        for(j=0; j<i; j++)
        {
            t=t*2;
        }
        s=s+(d*t);
        n=n/10;
    }
    printf("Decimal Number = %d", s);
    return 0;
}