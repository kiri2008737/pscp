//calculator
#include<stdio.h>
main()
{
int a,b;
char ch;
printf(" 1 addition\n 2 sub\n 3 multi\n 4 division\n 5 modulus");
printf("\nenter your choices=");
scanf("%c",&ch);
printf("\nenter any two number");
scanf("%d %d",&a,&b);
switch(ch)
{
case '1':
printf("add=%d",a+b);
break;
case '2':
printf("sub=%d",a-b);
break;
case '3':
printf("multi=%d",a*b);
break;
case '4':
printf("div=%d",a/b);
break;
case '5':
printf("modulus=%d",a%b);
break;
default:
printf("invalid");
}
return 0;
}
