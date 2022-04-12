

#include <stdio.h>
void main()
{
    printf("now we stared the calculation");
    float p, cost, p1, cost1;
    for (p = 0; p <= 10; p + 0.1)
    {
        cost = 40 - 8 * p + p * p;
        if (p == 0)
        {
            cost1 = cost;
            continue;
        }
        if (cost >= cost1)
            break;

        cost1 = cost;
        p1 = p;
    }
    p = (p + p1) / 2;
    cost = 40 - 8 * p + p * p;
    printf("the minimum price of c is %.2f at p %.1f ", cost, p);
}