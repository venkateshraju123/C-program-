#include<stdio.h>
int main()
{
int a,b,c; int ch;
printf("enter the value of a&b");
scanf("%d%d",&a,&b);
printf("enter choice");
scanf("%d", & ch);
switch(ch)
{
case 1:c=a+b;printf("sum=%d",c);
case 2:c=a-b;printf("subtraction=%d",c);
case 3:c=a*b;printf("mul=%d",c);
default:printf("invalid operation");
}
}
