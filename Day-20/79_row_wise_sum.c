#include <stdio.h>
int main()
{
    int a[10][10];
    int r, c, flag=1;
    printf("Enter order of matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter %d elements of matrix: ", r*c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Sum of each row: ");
    for(int i=0; i<r; i++)
    {
        int s=0;
        for(int j=0; j<c; j++)
        {
            s=s+a[i][j];
        }
        printf("\nRow %d = %d", i+1, s);
    }
    return 0;
}