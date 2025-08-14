#include<stdio.h>
void main()
{
int a,b;
printf("Enter two nos:");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%dis larger than %d",a,b);
}
else
{
printf("%d is larger than %d",b,a);
}
}
