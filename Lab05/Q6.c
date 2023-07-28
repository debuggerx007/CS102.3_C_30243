#include <stdio.h>
int main(){
    int base, expo, count, pwr;
    printf("Enter a Base and Exponent: ");
    scanf("%d %d", &base, &expo);

    while(count<=expo){
        pwr = base*base;
        count++;
    }
    printf("%d", pwr);
}
