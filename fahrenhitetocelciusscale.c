#include <stdio.h>
int main()
{
    int fah, cc;
    int lower = 0, upper = 200, step = 10;
    fah = lower;
    for (fah = 0; fah <= upper; fah = fah + step)
    {
        cc = 5 * (fah - 32) / 9;
        printf("%d\t%d\n", fah, cc);
    }

    return 0;
}
