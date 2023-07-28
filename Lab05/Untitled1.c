#include <stdio.h>
int main(){
    int num, i, sum=0;
    float avg;
    for(i=1;i<=10;i++){
        printf("Enter %d number: ", i);
        scanf("%d", &num);
        sum += num;
    }

    avg = sum/10;
    printf("Average = %f", avg);
}
