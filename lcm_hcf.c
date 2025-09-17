#include <stdio.h>

int main() {
int a=1,n,m,c;
printf("enter first no.: ");
scanf("%d",&n);
printf("enter sec no.: ");
scanf("%d",&m);
c=n*m;


 while(a<=c){
    if (a%n==0 && a%m==0)
            {printf("LCM of %d and %d: %d",n,m,a);
            break;}
    a++;}
    
    hcf=c%a
    printf("Hcf of %d and %d: %d",n,m,hcf); 

return 0;



}