#include <stdio.h>
int main()
{
    int a[100], n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &k);
    printf("Pairs eith sum %d: ", k);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==k)    
            {
                printf("\n%d\t %d", a[i], a[j]);
            }
        }
    }
    return 0;
}