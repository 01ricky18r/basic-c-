//date-28.02.2021
#include <stdio.h>
main()
{
    int f, c;
    int lower = 0, upper = 200, step = 20;
    f = lower;
    for (f = 0; f <= upper; f = f + step)
    {
        c = 5 * (f - 32) / 9;
        printf("%d\t%d\n", f, c);
    }
}