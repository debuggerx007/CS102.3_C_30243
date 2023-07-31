#include <stdio.h>
int main(){
    int size;

    printf("Enter array Size: ");
    scanf("%d", &size);

    int arr1[size];
    int arr2[size];
    int arr3[size];

    int i, j, k, scalarSum, vectorSum, scalarProduct, vectorProduct;

    for(i=0; i<size; i++){
        printf("Enter Array 1 %d element: ", i+1);
        scanf("%d", &arr1[i]);
        scalarSum += arr1[i];
    }

    printf("\nScalar Sum of Array 1 = %d\n", scalarSum);
    printf("\n");
    scalarSum = 0;

    for(j=0; j<size; j++){
        printf("Enter Array 2 %d element: ", j+1);
        scanf("%d", &arr2[j]);
        scalarSum += arr2[j];
    }
    printf("\nScalar Sum of Array 2 = %d", scalarSum);

    printf("\n");
    for(i=0; i<size; i++){
        for(j=i; j<=i; j++){
            arr3[i] = arr1[i]+arr2[j];
        }
        printf("\nArray 3 vector sum %d element %d", i+1, arr3[i]);
    }

    printf("\n");
    for(i=0; i<size; i++){
        for(j=i; j<=i; j++){
            arr3[i] = arr1[i]*arr2[j];
        }
        printf("\nArray 3 Vector Product %d element %d", i+1, arr3[i]);
    }
}
