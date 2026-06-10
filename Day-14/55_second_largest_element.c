#include <stdio.h>
int main()
{
    int a[100], n, max, s;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            s=max;
            max=a[i];
        }
        else if(a[i]<max && a[i]>s)
            s=a[i];
    }
    printf("Second largest element = %d", s);
    return 0;
}
