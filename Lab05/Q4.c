#include <stdio.h>
int main(){
    int num, digit, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0){
        digit = num%10;
        sum += digit;
        num = num/10;
    }
    printf("%d", sum);
}
