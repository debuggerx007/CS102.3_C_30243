#include <stdio.h>
int main(){
    int opt;
    float radi, cal;

    printf("1. Circumference of a Circle\n");
    printf("2. Area of a Circle\n");
    printf("3. Volume of a Sphere\n");
    printf("\n");

    printf("Select an option number: ");
    scanf("%d", &opt);
    printf("Enter Radius value: ");
    scanf("%f", &radi);

    switch(opt){
        case 1 :
            cal = radi*2.0*(22.0/7.0);
            printf("Circumference = %.2f", cal);
            break;
        case 2 :
            cal = radi*radi*(22.0/7.0);
            printf("Area = %.2f", cal);
            break;
        case 3 :
            cal = (4.0/3.0)*(22.0/7.0)*radi*radi;
            printf("Volume of sphere = %.2f", cal);
            break;
        default :
            printf("Invalid option number");
    }
}
