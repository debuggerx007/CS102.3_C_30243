#include <stdio.h>

/*int main(){
    int arr[10];
    int i, j;
    int min = 0;
    int max = 0;
    float sum = 0;
    float avg = 0;
    int reverse = 0;

    for(i=0;i<10;i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
        if(max<arr[i]){
            max = arr[i];
        }

        sum += arr[i];
    }

    for(i=0;i<10;i++){
        min = arr[i];
        for(j=1;j<10;j++){
            if(min>arr[j]){
                min = arr[j];
            }
        }
    }

    printf("\nMaximum value: %d", max);
    printf("\nMinimum value: %d", min);
    printf("\nAverage value: %.2f", avg = sum/10.0);
    printf("\nReverse Order:");

    for(i=9;i>=0;i--){
        printf("\nElement %d is %d", i+1, arr[i]);
    }
}*/

int main(){
    int arr[10];
    int i, max, min, tot = 0;
    float avg;

    for(i=0;i<10;i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
        tot += arr[i];
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    avg = (float)tot/10;

    printf("The Minimum value is %d \nThe Maximum value is %d", min, max);
    printf("\nThe average is %.2f\n", avg);

    for(i=9;i>=0;i--){
        printf("\nElement %d is %d", i+1, arr[i]);
    }
}

