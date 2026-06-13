#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n1, n2, k=0;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
        c[k]=a[i];
        k++;
    }
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
        int flag=0;
        for(int j=0; j<k; j++)
        {
            if(c[j]==b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            c[k]=b[i];
            k++;
        }
    }
    printf("Union of Arrayys: ");
    for(int i=0; i<k; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}