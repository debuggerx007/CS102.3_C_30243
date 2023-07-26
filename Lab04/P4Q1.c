#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num%2 == 0){
        printf("The number you entered is even");
    }
    else{
        printf("THe number you entered is odd");
    }
}
