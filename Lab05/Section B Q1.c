#include <stdio.h>
int main()
{
    int n, count = 1, pcount = 0, ncount = 0, zcount = 0;
    while(count<=10)
    {
        printf("Enter %d number: ", count);
        scanf("%d", &n);
        if(n>0)
        {
            pcount++;
        }
        else if(n<0)
        {
            ncount++;
        }
        else
        {
            zcount++;
        }
        count++;
    }
    printf("Number of Positive Numbers: %d\n", pcount);
    printf("Number of Negative Numbers: %d\n", ncount);
    printf("Number of Zeros: %d\n", zcount);

}
