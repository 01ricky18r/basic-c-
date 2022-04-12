#include <stdio.h>
#define N 5
int main()
{
    int value[N];
    int i, j, n, x;
    for (n = 0; n < N; ++n)
    {
        printf("enter the number of group(%d)", n + 1);
        scanf("%d", &x);
        value[n] = x;
    }

    printf("\n");
    printf("        |\n");
    for (n = 0; n < N; ++n)
    {
        for (i = 1; i <= 3; i++)
        {
            if (i == 2)

            {
                printf("group(%d1)|", n + 1);
            }

            else
            {
                printf("        |");
            }

            for (j = 0; j < value[n]; ++j)
            {
                printf("*");
            }
            if (i == 2)
            {
                printf("(%d)\n", value[n]);
            }
            else
            {
                printf("\n");
            }
        }
        printf("        |\n");
    }
}
