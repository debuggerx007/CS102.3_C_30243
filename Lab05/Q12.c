#include <stdio.h>
int main()
{
    int num, sum;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum+num;
    }while(num!=-1);
    printf("Total : %d ", sum+1);
}
