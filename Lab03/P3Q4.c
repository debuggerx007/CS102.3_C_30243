#include <stdio.h>

int main(){
    float radius, diameter, circum, area;
    float phi = 3.14159;
    printf("Enter Radius: ");
    scanf("%f", &radius);

    diameter = 2.0*radius;
    circum = 2.0*phi*radius;
    area = phi*radius*radius;

    printf("\n");
    printf("Diameter = %.3f\n", diameter);
    printf("Circumference = %.3f\n", circum);
    printf("Area = %.3f\n", area);
}
