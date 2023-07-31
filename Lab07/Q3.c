#include <stdio.h>
int calculation(int num1, int num2){
    int product;
    product = num1*num2;
    return product;
}

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Your product is %d", calculation(x, y));
}
