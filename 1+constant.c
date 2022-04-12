#include <stdio.h>
int main(void)
{
    int man, rit = 0;
    printf("enter number");
    scanf("%d", &man);
    do
    {
        rit = rit + 1;
        printf("%d\n", rit);
    } while (rit < man);
}
