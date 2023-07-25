#include <stdio.h>

int main(){
    int a;
    float b;
    double c;
    char d;

    printf("Enter a char value: ");
    scanf("%c", &d);
    printf("Enter a int value: ");
    scanf("%d", &a);
    printf("Enter a float value: ");
    scanf("%f", &b);
    printf("Enter a double value: ");
    scanf("%f", &c);

    printf("\n");
    printf("The int value is, %d\n", a);
    printf("The float value is, %f\n", b);
    printf("The double value is, %if\n", c);
    printf("The char value is, %c\n", d);

}
