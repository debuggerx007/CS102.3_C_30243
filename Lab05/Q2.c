#include <stdio.h>
int main(){
    int count=1;
    float mark, total=0, avg;

    while(count<=10){
        printf("Enter subject %d mark: ", count);
        scanf("%f", &mark);
        if(mark>100 || mark<0){
            printf("Invalid mark\n");
        }
        else{
            total = mark+total;
            count++;
        }
    }

    printf("\n");
    avg = total/10.0;
    printf("Total Marks: %.2f\n", total);
    printf("Average Mark: %.2f\n", avg);

    if(avg<50){
        printf("Fail!");
    }
    else{
        printf("Pass!");
    }
}
