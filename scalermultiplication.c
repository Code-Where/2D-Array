//Enter the Matrix from user, multiply it with a scalar value and display the answer
#include<stdio.h>

void printArr(int arr[2][2]){
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");        
    }
    
}

void scalerMul(int mat[2][2], int num){
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            mat[i][j] = num * mat[i][j];
        }
    }
}

int main(){
    int arr[2][2], i, j, num;

    for( i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Value at A[%d,%d]\t", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter Scaler Value to be multiplied\n");
    scanf("%d", &num);
    printf("Entered Matrix\n");
    printArr(arr);
    scalerMul(arr, num);
    printf("New Matrix is\n");
    printArr(arr);
    return 0;
}