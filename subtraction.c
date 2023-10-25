// Enter two Matrices from user, subtract the matrices and display the answer
#include<stdio.h>

void subMatrix(int arr1[2][3], int arr2[2][3], int result[2][3]){
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void printArr(int arr[2][3]){
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");        
    }
    
}

int main(){
    int arr1[2][3], arr2[2][3], res[2][3], i, j;
    for( i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("For First Matrix\n");
            printf("Enter Value at A[%d,%d]\t", i+1, j+1);
            scanf("%d", &arr1[i][j]);
            printf("For Second Matrix\n");
            printf("Enter Value at A[%d,%d]\t", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
        
    }
    printf("Matrix 1: \n");
    printArr(arr1);
    printf("Matrix 2: \n");
    printArr(arr2);
    subMatrix(arr1, arr2, res);
    printf("\nSum of these Two matrix is \n");
    printArr(res);
    return 0;
}