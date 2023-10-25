// Enter a Matrix from user, copy it in another matrix of same size
#include<stdio.h>

void display(int mat[2][2]){
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int matcpy(int src[2][2], int dest[2][2]){
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            dest[i][j] = src[i][j];
        }
    }
    return 1;
}

int main(){
    int mat[2][2], copymat[2][2], i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Value of R%d C%d\t", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Entered Matrix\n");
    display(mat);
    if(matcpy(mat, copymat)){
        printf("Copied Matrix\n");
        display(copymat);
    }
    return 0;
}