#include <stdio.h>
int main(){
    int num1, num2;
    float cal;
    char op ;
    printf("%c%2c\n", '+', '-');
    printf("%c%2c\n", '/', '*');
    printf("\n");
    printf("Select the operator: \n");
    scanf("%c", &op);
    printf("\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(op){
        case '+': cal = num1+num2; break;
        case '-': cal = num1-num2; break;
        case '/': cal = num1/num2; break;
        case '*': cal = num1*num2; break;
    }

    printf("%d %c %d = %f", num1, op, num2, cal);
}
