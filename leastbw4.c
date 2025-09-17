#include <stdio.h>
int main() {

int a,b,c,d;
printf("enter 1st no.");
scanf("%d",&a);
printf("enter 2nd no.");
scanf("%d",&b);
printf("enter 3rd no.");
scanf("%d",&c);
printf("enter 4th no.");
scanf("%d",&d);

if (a<b)
{
if (a<c)
{if (a<d)
{printf("least no. is %d \n ",a);} } }

if (b<a)
{
if (b<c)
{if (b<d)
{printf("least no. is %d \n ",b);} } }

if (c<a)
{
if (c<b)
{if (c<d)
{printf("least no. is %d \n ",c);} } }

if (d<b)
{
if (d<c)
{if (d<a)
{printf("least no. is %d \n ",d);} } }

return 0;
}