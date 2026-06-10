#include <stdio.h>
int main()
{
    int a[100], n, s;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d", &s);
    for(int i=0; i<n; i++)
    {
        if(a[i]==s)
        {
            printf("Element %d found at %d position.", s, i+1);
            return 0;
        }
    }
    printf("Element not found.");
    return 0;
}
    
