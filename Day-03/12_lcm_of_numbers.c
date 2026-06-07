#include <stdio.h>
int main()
{
    int a, b ,lcm, i, max;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    max=a>b?a:b;
    for(i=max; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    printf("LCM of %d and %d = %d", a, b, lcm);
    return 0;
}