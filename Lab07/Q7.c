#include <stdio.h>
int calculation1(int num1, float num2){
    double product;
    product = num1*num2;
    return (double) product;
}

int main(){
    int x;
    float y;
    printf("Enter two numbers: ");
    scanf("%d %f", &x, &y);
    printf("Your product is %f", calculation1(x, y));
}
