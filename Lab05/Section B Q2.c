#include <stdio.h>

int main(){
    int i, j, k, num, arry[10];
    int max, min;
    float avg;

    for(i=0;i<10;i++){
        printf("Enter %d mark: ", i+1);
        scanf("%d", &num);
        arry[i]=num;
    }

    for(j=0;j<10;j++){
       for(k=1;k<10;k++){
            printf("j= %d, k= %d\n", j, k);
            max = arry[j];
            if(arry[j]>max){
                max = arry[j];
            }else{
                max = arry[k];
            }
       }
       printf("\n");
    }

    printf("Maximum: %d", max);
}
