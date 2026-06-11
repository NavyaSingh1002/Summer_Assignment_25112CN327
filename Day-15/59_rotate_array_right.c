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
    int temp=a[n-1];
    for(int i=n-1; i>0; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("Array after rotating: ");
    for(int i=0; i<n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}