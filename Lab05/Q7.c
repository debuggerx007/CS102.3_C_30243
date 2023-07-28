#include <stdio.h>
int main()
{
    int i, t1=0, t2=1, next;
    printf("%d ", t1);
    printf("%d ", t2);
    printf("%d ", next = t1+t2);
    for(i=4;i<=10;i++)
    {
        t1=t2;
        t2=next;
        next = t1+t2;
        printf("%d ", next);
    }

}
