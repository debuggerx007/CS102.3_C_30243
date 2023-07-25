#include <stdio.h>

int main(){

    float bsalary, bonus, temp1, nsalary, temp2;
    int years;
    char city;

    printf("Enter working city: ");
    scanf("%c", &city);

    switch(city){
        case 'c':
        temp2 = 2500;
        printf("You are eligible for city allowance\n");
        break;
        default:printf("Not eligible city allowance\n");
    }

    printf("Enter Your Basic Salary: ");
    scanf("%f", &bsalary);
    printf("Enter number of service years: ");
    scanf("%d", &years);

    if(years>5){
        printf("You are eligible for service years allowance\n");
        temp1 = bsalary*0.1;
    }
    else{
        printf("Not eligible for service years allowance\n");
    }
    if(bsalary<25000){
        bonus = bsalary*0.1;
    }
    else if(bsalary<50000){
        bonus = bsalary*0.12;
    }
    else{
        bonus = bsalary*0.15;
    }

    nsalary = bsalary+bonus+temp1+temp2;
    printf("Your gross monthly remuneration is: Rs.%.2f\n", nsalary);
}
