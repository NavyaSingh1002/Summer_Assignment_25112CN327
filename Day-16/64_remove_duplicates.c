#include <stdio.h>
int main()
{
    int a[100], b[100], freq[1000]={0};
    int n, max;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Array after removing duplicates: ");
    for(int i=0; i<=max; i++)
    {
        if(freq[i]>=1)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}