#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n1, n2;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Common elements: ");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(a[i]==b[j])
            {
                printf("%d\t", b[j]);
                break;
            }
        }
    }
    return 0;
}