#include <stdio.h>

int main(){
    char name[10];
    int byear, age;

    printf("Enter your name and birth year: ");
    scanf("%s %d", &name, &byear);
    age = 2023-byear;
    printf("%s", name);
    printf(", your age is %d\n", age);
}
