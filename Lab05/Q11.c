
#include <stdio.h>
int main(){
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0 || num == 1){
        printf("Not a prime number");
    }
    if(num==2){
        printf("A prime number");
    }
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            printf("Not a prime number");
        }
        else{
            printf("A prime number");
        }
    }
}
