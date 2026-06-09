#include <stdio.h>
int main()
{
    int a[100], n, s=0;
    float avg;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }
    avg=(float)s/n;
    printf("Sum of array = %d", s);
    printf("\nAverage of array = %.2f", avg);
    return 0;
}