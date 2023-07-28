#include <stdio.h>
int main(){
    int num, fac, count=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    fac = num;

    if(num<0){
        printf("Error!");
    }
    else if(num==0){
        printf("Factorial of 0 is 1");
    }
    else{
        while(count<num){
        fac = fac*count;
        count++;
        }
        printf("Factorial of %d is %d", num, fac);
        }
}
