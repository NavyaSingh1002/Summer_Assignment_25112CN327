#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n1, n2;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter elements of array 1: ");
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter elements of array 2: ");
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }
    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("Merged Array: ");
    for(int i=0; i<k; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}
