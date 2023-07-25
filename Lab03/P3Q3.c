#include <stdio.h>

int main(){
    float bsalary, nsalary;
    char name[10];

    printf("Enter Your name and your basic salary: ");
    scanf("%s %f", &name, &bsalary);

    if(bsalary < 5000){
        nsalary = bsalary+(bsalary*(5.0/100.0));
    }
    else if(bsalary < 10000){
        nsalary = bsalary+(bsalary*(10.0/100.0));
    }
    else{
        nsalary = bsalary+(bsalary*(15.0/100.0));
    }
    printf("%s, ", name);
    printf("your new salary is Rs.%.2f", nsalary);
}
