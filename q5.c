#include <stdio.h>

int main()
{

    int num = 5;

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num - i + 1; j++)
        {
            printf("%d", j);
        }

        for (int k = 1; k <= 2 * (i - 1); k++)
        {
            printf(" ");
        }

        for (int l = num - i + 1; l >= 1; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (int k = 1; k <= 2 * (num - i); k++)
        {
            printf(" ");
        }

        for (int l = i; l >= 1; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}