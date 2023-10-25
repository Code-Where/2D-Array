// Enter two Matrices from user, add the matrices and display the answer
#include<stdio.h>

void sumMatrix(int arr1[3][5], int arr2[3][5], int result[3][5]){
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void printArr(int arr[3][5]){
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");        
    }
    
}

int main(){
    int arr1[3][5], arr2[3][5], sum[3][5], i, j;
    for( i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("For First Matrix\n");
            printf("Enter Value at A[%d,%d]\t", i+1, j+1);
            scanf("%d", &arr1[i][j]);
            printf("For Second Matrix\n");
            printf("Enter Value at B[%d,%d]\t", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Matrix 1: \n");
    printArr(arr1);
    printf("Matrix 2: \n");
    printArr(arr2);
    sumMatrix(arr1, arr2, sum);
    printf("Sum of these Two matrix is \n");
    printArr(sum);
    return 0;
}