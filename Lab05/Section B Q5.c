#include <stdio.h>
int main(){
    int EmpNo, hours;
    float ot;
    int EmpCount, count = 0, percentage;

    for(EmpCount=0;EmpNo!=-999;EmpCount++){
        printf("\nEnter Employee Number: ");
        scanf("%d", &EmpNo);

        if(EmpNo!=-999){
            printf("Enter Employee (%d) work Hours: ", EmpNo);
            scanf("%d", &hours);

            if(hours>40){
                ot = hours*200.0;
            }else{
                ot = hours*150.0;
            }

            if(ot>4000){
                count++;

            }
            printf("Employee No:%d \n", EmpNo);
                printf("Over Time Payment:%.2f \n", ot);
            }
        percentage = (count/EmpCount)*100;
    }
    EmpCount = EmpCount-1;

    printf("Over Time Exceeding percentage: %d", percentage);
}
