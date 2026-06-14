#include <stdio.h>
int main()
{
    int a[100], n, i=0, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int min=i;
        for(int j=i; j<n; j++)
        {
            if(a[j]<a[min])
                min=j;
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("Sorted Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}