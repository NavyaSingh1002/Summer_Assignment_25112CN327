#include <stdio.h>
int main()
{
    int a[100], n, s, c=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to calculate frequency of: ");
    scanf("%d", &s);
    for(int i=0; i<n; i++)
    {
        if(a[i]==s)
            c++;
    }
    printf("Frequency = %d", c);
    return 0;
}