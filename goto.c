#include <stdio.h>
int main()
{
   label:
    printf("hello world");
    goto label;

    return 0;
}