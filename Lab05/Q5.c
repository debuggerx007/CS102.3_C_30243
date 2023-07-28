#include <stdio.h>
int main(){
    int num, original, count=0, digit, temp, expo, pwrCount, pwr, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(original=num;original>0;count++)
    {
        original=original/10;
    }

    for(original=num;original>0;original=original/10)
    {
        digit = original%10;
        for(expo=count;pwr<=expo;pwrCount++)
        {
            pwr = digit*digit;
        }
        result+=pwr;
    }
    printf("%d", result);


}
