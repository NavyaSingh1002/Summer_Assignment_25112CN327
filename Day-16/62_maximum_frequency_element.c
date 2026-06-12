#include <stdio.h>
int main()
{
    int a[100], freq[1000]={0};
    int max, n;
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
    int s=freq[0];
    for(int i=0; i<=max; i++)
    {
        if(freq[i]>s)
            s=freq[i];
    }
    printf("Maximum frequency element = %d", s);
    return 0;
}