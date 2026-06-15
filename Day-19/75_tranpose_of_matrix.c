#include <stdio.h>
int main()
{
    int a[10][10];
    int r, c;
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
    printf("After tranposing: ");
    for(int i=0; i<r; i++)
    {
        printf("\n");
        for(int j=0; j<c; j++)
        {
            printf("%d \t", a[j][i]);
        }
    }
    return 0;
}