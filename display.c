// Enter a matrix of 4 rows and 2 columns from the user display it in matrix format
#include<stdio.h>

void display(int mat[4][2]){
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[4][2], i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Row %d Column %d Value:\t", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    display(mat);
    return 0;
}