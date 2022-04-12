//13.03.21
#include<stdio.h>
main()
{   //line counting
    int c, n, b, t;
    n=0;
    while((c=getchar())!=EOF) {
        if(c=='\n')
            ++n;
        if(c==' ' )
            ++b;
        if(c=='\t' )
            ++t;
    }

    printf(" newlines%d\n"
           "blanks%d\ntabs%d"
           "\n", n, b, t);
}
