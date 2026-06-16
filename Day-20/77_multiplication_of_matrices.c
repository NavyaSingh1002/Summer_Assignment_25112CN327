#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    printf("Enter order of matrix 1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter order of matrix 2: ");
    scanf("%d%d", &r2, &c2);
    if(c1!=r2)
    {
        printf("Multiplication is not possible.");
        return 0;
    }
    printf("Enter %d elements of matrix 1: ", r1*c1);
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d elements of matrix 2: ", r2*c2);
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            scanf("%d", &b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Multiplication of matrices: ");
    for(int i=0; i<r1; i++)
    {
        printf("\n");
        for(int j=0; j<c2; j++)
        {
            c[i][j]=0;
            for(int k=0; k<c1; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d \t", c[i][j]);
        }
    }
    return 0;
}
