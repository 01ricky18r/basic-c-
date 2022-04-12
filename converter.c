
#include <stdio.h>

int main()
{
    printf("hello ricky");
    char section;
    float unit, result;
    int form;
the:

    printf("what you converted to\npress 1 for weight\n"
           "press 2 for lenth\n or press 3 for temperature\n");
    printf("or enter q for quit\n");
    scanf("%c", &section);
    if (section == 'q')
    {
        goto end;
    }
    else
    {
        switch (section)
        {
        case '1':
            printf("you chose weight\npress 1 for kg to lb\npress 2 for lb to kg \n");
            scanf("%d", &form);
            if (form == 1)
            {
                printf("enter the weight\n");
                scanf("%f", &unit);
                result = unit * 2.2046226;
                printf("%fkg = %flb", unit, result);
clrscr();
            }
            else if (form == 2)
            {
                printf("enter the weight\n");
                scanf("%f", &unit);
                result = unit * 0.453592;
                printf("%flb = %fkg", unit, result);
clrscr();

            }
            break;
        case '2':
            printf("you choose lenth\npress 1 for inch to cm\npress 2 for cm to inch\n");
            scanf("%d", &form);
            if (form == 1)
            {
                printf("enter the lenth\n");
                scanf("%f", &unit);
                result = unit * 2.54;
                printf("%finch = %fcm", unit, result);
clrscr();

            }
            else if (form == 2)
            {
                printf("enter the lenth\n");
                scanf("%f", &unit);
                result = unit * 0.393701;
                printf("%fcm = %finch", unit, result);
clrscr();

            }
            break;

        default:

            printf("sorry please choose right section");
clrscr();

            break;
        }
        goto the;
    }
end:
    return 0;
}
