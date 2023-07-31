#include <stdio.h>
void calculator(){
    int num1, num2, sum, diff;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1+num2;
    diff = num1-num2;

    printf("Sum = %d", sum);
    printf("\nDifference = %d", diff);
}

int main(){
    calculator();
}
