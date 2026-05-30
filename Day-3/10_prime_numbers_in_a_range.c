#include <stdio.h>
int main()
{
    int l, h, c, i, j;
    printf("Enter lower limit: ");
    scanf("%d", &l);
    printf("Enter upper limit: ");
    scanf("%d", &h);
    for(i=l; i<=h; i++)
    {
        int c=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0 && i!=1)
            printf("\n%d", i);
    }
    return 0;
}