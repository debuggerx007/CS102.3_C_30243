#include <stdio.h>

int main(){
    int EmpNo, salary;
    int i, count = 0;

    for(i=1;EmpNo!=-999;i++){
        printf("Enter Employee No: ");
        scanf("%d", &EmpNo);

        if(EmpNo!=-999){
            printf("Enter salary of %d: ", EmpNo);
            scanf("%d", &salary);
            printf("\n");
            if(salary>=5000){
                count++;
            }
        }
    }

    printf("\nNo of Emps Basic Salary greater than 5000: %d", count);
}
