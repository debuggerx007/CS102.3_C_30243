#include <stdio.h>

int main(){
    int i, j, num, arry[10];
    for(i=0;i<10;i++){
        printf("Enter number: ");
        scanf("%d", &num);
        arry[i]=num;
    }
    printf("\nEven Elements ->\n");
    for(j=0;j<10;j++){
        if(arry[j]%2==0){
            printf("arry[%d] = %d\n", j, arry[j];
        }
    }
}
