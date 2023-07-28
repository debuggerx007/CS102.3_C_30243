#include <stdio.h>
int main()
{
    int num, count;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nFactors of %d: ", num);

    for(count=1;count<=num;count++){
        if(num%count==0){
           printf("%d, ", count);
        }
    }
}
