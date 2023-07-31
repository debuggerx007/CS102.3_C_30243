#include <stdio.h>
int divider(int a, int b){
    int quotient;
    quotient = a/b;
    return quotient;
}

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Your Quotient is %d", divider(x, y));
}
