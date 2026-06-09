#include <stdio.h>
int main()
{
    int a[100], n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max=a[0], min=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Largest element = %d", max); 
    printf("\nSmallest element = %d", min);
    return 0;
}