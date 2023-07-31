#include <stdio.h>
void calculate(){
    int num1, num2, sum;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1+num2;

    printf("Sum = %d", sum);
}

int main(){
    calculate();
    calculate();
    calculate();
}
