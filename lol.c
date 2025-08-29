#include <stdio.h>

int main() {
   int cp, sp, profit, loss;
   printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);
     if (sp > cp) {
        profit = sp - cp;
        printf("profit = %.2f\n", profit);
     } 
    else if (cp> sp) {
        loss = cp - sp;
        printf("loss = %.2f\n", loss);
    } 
    else {
        printf("No profit, No loss\n");
    }
    return 0;
}