#include <stdio.h>

int main(){

    int num1, num2, x;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swap first number: %d\n", num1);
    printf("Before swap second number: %d\n", num2);

    x = num1;
    num1 = num2;
    num2 = x;
    printf("\n");
    printf("After swap first number: %d\n", num1);
    printf("After swap second number: %d\n", num2);
}
