#include<stdio.h>
#include<conio.h>

main()
{clrscr();
float a,b;
printf("enter number");
scanf("%f", &a);
char x;
printf("enter opporater");
scanf(" %c", &x);
printf("enter number");
scanf("%f", &b);
float result;
switch(x)
{case '+':
result =a+b;
printf("%f", result);
break;
case '-':
 result =a-b;
printf("%f", result);
break;
case '*':
 result =a*b;
printf("%f", result);
break;
case '/':
 result =a/b;
printf("%f", result);
break;
default:
printf("sorry");
break;

}}