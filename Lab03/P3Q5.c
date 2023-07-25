#include <stdio.h>

int main(){
    int no1, no2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &no1, &no2);

    temp = no1%no2;
    if(temp==0){
        printf("First is a multiple of second number");
    }
    else{
        printf("Not a multiple");
    }
}
