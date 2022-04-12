#include <stdio.h>

main()
{
    int n;
    int m;

    printf("you will maximum try 3 times\n");

    for (int j = 0; j < 3; j++)
    {
        printf("you will try %d time\nplease try another time\n",j);

        printf("enter the value of 2+2");
        scanf("%d",&n);
        if (n==4)
        {

            goto end;

        }
       
    }
    goto theend;

    end:
    printf("all right, break the next question\n");

    for (int k = 0; k < 3; k++)
    {
       printf("you will try %d time\nplease try another time\n",k);

        printf("enter the value of 2+3");
        scanf("%d",&m);
        if (m==5)
        {

            goto ennd;

        }
    }
    printf("you will correct");

   

theend:
printf("you will fail");

ennd:



    return 0;
}