#include<stdio.h>
void main()
{
int n,m,r,s=0;
printf("enter  value of n");
scanf("%d",&n);
m=n;
while(m!=0)
{
r=m%10;
s=s+r*r*r;
m=m/10;
}
if(s==n)
printf("arm");
else
printf("not arm");
}
