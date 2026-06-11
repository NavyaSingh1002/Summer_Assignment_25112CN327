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
    j=n-1;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("Reversed Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
