#include <stdio.h>

int main(){
    int num1, num2, num3, max, min;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = num1;
    if(num2>max){
        max = num2;
    }
    if(num3>max){
        max = num3;
    }

    min = num1;
    if(num2<min){
        min = num2;
    }
    if(num3<min){
        min = num3;
    }
    printf("\n");
    printf("Largest Value: %d\n", max);
    printf("Smallest Value: %d\n", min);
}
