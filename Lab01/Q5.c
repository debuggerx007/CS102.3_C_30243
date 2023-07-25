#include <stdio.h>

int main(){

    float a, b, avg;
    printf("Enter two decimal numbers: ");
    scanf("%f %f", &a, &b);
    avg = (a+b)/2;
    printf("The average is, %.2f", avg);
}
