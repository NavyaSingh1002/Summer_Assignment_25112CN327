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
    printf("The elements of array are: ");
    for(int i=0; i<n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}
