#include <stdio.h>
int main()
{
    int a[100], n, i=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    while(a[i]!=0)
    {
        i++;
    }
    for(int j=i+1; j<n; j++)
    {
        if(a[j]!=0)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
        }
    }
    printf("Array after moving zeroes: ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}