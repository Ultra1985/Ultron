#include <stdio.h>

int main()
{
int a ,b ,c;
printf("enter the first no. :");
scanf("%d",&a);
printf("enter the sec no. :");
scanf("%d",&b);
printf("enter the third no. :");
scanf("%d",&c);
if (a>b)
{
if (a>c)
{printf("greater no. is %d \n ",a);}
}
if (b>a)
{
if (b>c)
{printf("greater no. is %d \n ",b);}
}
if (c>a)
{
if (c>b)
{printf("greater no. is %d \n ",c);}
}


return 0;



}