#include <stdio.h>
void cal(int num1, int num2){
    int sum, diff, product;
    sum = num1+num2;
    diff = num1-num2;
    product = num1*num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
}

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Your calculations are: ");
    cal(x, y);

}
