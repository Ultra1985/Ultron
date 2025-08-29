#include <stdio.h>
#define PI 3.14159  // Define the value of PI

int main() {
    float radius, area;

    // Ask user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area of circle
    area = PI * radius * radius;

    // Display the result
    printf("Area of the circle is: %.2f\n", area);

    return 0;
}