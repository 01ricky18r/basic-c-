// date-16.08.21
// here our two components c1 = 30-8*p , c2= 10+p*p;
// so cost of c1+c2=40-8*p+p*p;
// find the p when combine of two components at the minimum cost
// the parameter p ranges 0 to 10 , with an accuracy of 0.1
#include <stdio.h>
int main()
{
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
        {
            break;
        }
        cost = cost1;
        p = p1;
    }
    p = (p + p1) / 2.0;
    cost = 40 - 8 * p + p * p;
    printf("minimum cost is %.2f at p %.2f", cost, p);
    return 0;
}