#include <stdio.h>

int main(){
    int i, count = 0;
    float price, avg, sum = 0;

    for(i=1;i<=10;i++){
        printf("Enter %d Item price: ", i);
        scanf("%f", &price);
        sum += price;

        if(price>200){
            count++;
        }
    }

    printf("Average = Rs.%.2f\n", avg = sum/10.0);
    printf("Number of items greater than Rs.200: %d", count);
}
