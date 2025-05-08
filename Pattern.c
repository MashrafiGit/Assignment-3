#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int hash = 1;
    int sign = 3;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int a = 0; a < space; a++)
        {
            printf(" ");
        }
        space--;

        if (i % 2 == 0)
        {
            for (int j = 0; j < sign; j++)
            {
                printf("-");
            }
        }
        else
        {
            for (int q = 0; q < hash; q++)
            {
                printf("#");
            }
        }
        printf("\n");

        int tmp = hash;
        hash = sign + 2;
        sign = tmp + 2;
    }

    int hash2 = hash - 4;
    int sign2 = sign - 4;
    int space2 = 1;

    for (int i = n - 1; i >= 1; i--)
    {

        for (int a = 0; a < space2; a++)
        {
            printf(" ");
        }
        space2++;

        if (i % 2 == 0)
        {
            for (int j = 0; j < sign2; j++)
            {
                printf("-");
            }
        }
        else
        {
            for (int q = 0; q < hash2; q++)
            {
                printf("#");
            }
        }
        printf("\n");

        int tmp2 = hash2;
        hash2 = sign2 - 2;
        sign2 = tmp2 - 2;
    }

    return 0;
}
