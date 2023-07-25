#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("Highest Number is %d", num1);
    }
    else{
        printf("Highest Number is %d", num2);
    }
}
