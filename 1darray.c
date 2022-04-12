#include <stdio.h>
int main()
{
    int t, i,a;
    int tsla[6];
    int marks[4] = {23, 5, 1, 2};
    for (i = 1; i < 4; i++)
    {
        printf("enter the value of tsla[%d] ", i);
        scanf("%d", &tsla[i]);
    }
    printf(" which tsla value do you want to see \n");
    scanf("%d", &t);

    do {
    if (a == t)
    {
        printf("the value of tsla[%d] is %d\n", t, tsla[a]);
            
    }
    t++;
    }while ( t<6 );
     
    return 0;
}
