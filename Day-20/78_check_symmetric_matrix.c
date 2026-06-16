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
    for(int i=0; i<r; i++)
    {
        printf("\n");
        for(int j=0; j<c; j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is not symmetric.");
    return 0;
}