#include <stdio.h>
int getnumber(){
    int a;
    printf("put a number");
    scanf("%d",&a);
    return a;
}
int main()
{
    int b = getnumber();
    printf("this is the number%d",b);
   return 0;
}
