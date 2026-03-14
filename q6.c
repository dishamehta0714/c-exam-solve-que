

#include <stdio.h>

int main()
{

    int i, j;
    int row, col;

    printf("enter row size: ");
    scanf("%d", &row);

    printf("enter col size: ");
    scanf("%d", &col);

    printf("enter a element:");
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // printf("%d",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter b element:");
    int b[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = a[i][j] + b[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}