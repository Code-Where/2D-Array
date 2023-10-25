// Enter two Matrices from user, multiply the matrices and display the answer
#include<stdio.h>

void matrixMultiply(int arr1[3][3], int arr2[3][2], int res[3][2]){
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            res[i][j] = 0;
            for (k = 0; k < 3; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void printArr(int arr[3][2]){
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");        
    }
    
}

int main(){
    int arr1[3][3], arr2[3][2], res[3][2];
    int i, j;
    printf("Enter Matrix 1\n");
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value at Mat[%d,%d]\n", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter Matrix 2\n");
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter value at Mat[%d,%d]\n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    matrixMultiply(arr1, arr2, res);
    printf("\nMultiplication of these Two matrix is \n");
    printArr(res);
    
    return 0;
}