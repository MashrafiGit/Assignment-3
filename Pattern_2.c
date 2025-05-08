#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        space--;

        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}