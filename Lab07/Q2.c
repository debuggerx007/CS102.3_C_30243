#include <stdio.h>

void calculator(int a, int b){
    int sum, diff;
    sum = a+b;
    diff = a-b;

    printf("Sum = %d", sum);
    printf("\nDifference = %d", diff);
}

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    calculator(x, y);
}
