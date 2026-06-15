#include <stdio.h>
int main()
{
    int a[10][10];
    int r, c, s=0;
    printf("Enter order of matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter %d elements of matrix: ", r*c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
            if(i==j)
                s=s+a[i][j];
        }
    }
    printf("Sum of diagonals = %d", s);
    return 0;
}