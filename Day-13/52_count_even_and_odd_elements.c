#include <stdio.h>
int main()
{
    int a[100], n, count1=0, count2=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            count1++;
        else
            count2++;
    }
    printf("Number of even elements = %d", count1);
    printf("\nNumber of odd elements = %d", count2);
    return 0;
}