#include <stdio.h>

int main()
{


int units, _chrg= 0, _sab= 0;

printf("Enter number of units used: ");
scanf("%d", &units);

//sabotage unit

if (units <= 100)
{
    _sab = 0;
}
else

if (units <= 300) {
    _sab = 100;
}
else

if (units <= 500) {
    _sab = 200;
}

else
{
    _sab = 300;
}

//charge unit
if (units <= 100)
{
    _chrg = units * 300;
}
else

if (units <= 300)
{
    _chrg = (100 * 3) + (units - 100) * 3;
}
else

if (units <= 500)
{
    _chrg = (100 * 300) + (200 * 500) + (units - 300) * 700;
}
else
{
    charge = (100 * 300) + (200 * 500) + (200 * 700) + (units - 500) * 1000;
}

charge =charge + surcharge;

printf("Total electricity bill is: %d \\n", charge);

return 0;



}