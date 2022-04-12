//call by reference (function)
#include <stdio.h>
void swap(int *x, int *y)
{
    int bekar;
    bekar = *x; //here we insert the value of a into bekar
    *x = *y;    //here we put a into b and fixed the value of x into b
    *y = bekar; //and last we change the value of b into a
    return;
}
int main()
{
    int a, b;
    printf("enter the value of a and b\n");
    scanf(" %d ,%d", &a, &b);
    printf("now the value of a and b is %d and %d\n", a, b);
    //then the function comes and swap the numbers
    //here i type &a because i wanted to store the addres of integer in swap function
    swap(&a, &b);
    //thats enough for swaping the value a and b . and now we got the different value a and b here
    printf("now we swap the value of a and b ,theres the a and b is %d and %d ", a, b);

    return 0;
}