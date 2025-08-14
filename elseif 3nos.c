#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three nos:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%dis larger than %d and %d",a,b,c);}
else if(b>a && b>c)
{
printf("%dis larger than %d and %d",b,a,c);}
else
printf("%dis larger than %d and %d",c,a,b);
}
