#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n1, n2, j=0;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
        c[j]=a[i];
        j++;
    }
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
        c[j]=b[i];
        j++;
    }
    printf("Merged Array: ");
    for(int j=0; j<n1+n2; j++)
    {
        printf("%d\t", c[j]);
    }
    return 0;
}
