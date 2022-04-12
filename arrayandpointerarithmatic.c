#include <stdio.h>
int main()
{
    int i = 1;
    int a[10] = {1, 2, 2};
    int *p = &a[i];

    // printf("when the value of i is %d\n", i);
    printf("the value of a[%d] is %d\n", i, a[i]);
    printf("the value of pointer p is %d\n", p);
    p++;
    printf("the value of pointer p is %d\n", p);
    a[i]++;
    printf("the value of a[%d] is %d\n", i, a[i]);

    return 0;
}