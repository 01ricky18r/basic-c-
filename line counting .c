//13.03.21
#include<stdio.h>
main()
{//line counting
    int c, n;
    n=0;
    while((c=getchar())!=EOF)
        if(c=='\n')
            ++n;
            printf("%d😎", n);
}