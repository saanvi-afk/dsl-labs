#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int rows, int cols)
{
    int **mat=(int **)malloc(rows * sizeof(int *));
    for (int i=0; i<rows; i++)
    {
        *(mat+i) = (int *)malloc(cols * sizeof(int));
    }
    return mat;
}

void readMatrix(int **mat, int rows, int cols)
{
    printf("Enter elements (%d x %d):\n", rows, cols);
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            scanf("%d", (*(mat + i) + j));
        }
    }
}

void displayMatrix(int **mat, int rows, int cols)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int **multiplyMatrices(int **mat1, int **mat2, int r1, int c1, int c2)
{
    int **product = allocateMatrix(r1, c2);
    for (int i=0; i<r1; i++)
    {
        for (int j=0; j<c2; j++)
        {
            *(*(product+i)+j) = 0;
            for (int k = 0; k<c1; k++)
            {
                *(*(product+i)+j) += (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
            }
        }
    }
    return product;
}

void freeMatrix(int **mat, int rows)
{
    for (int i=0; i<rows; i++)
    {
        free(*(mat + i));
    }
    free(mat);
}

int main()
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d",&r2,&c2);
    if (c1!=r2)
    {
        printf("Matrix multiplication not possible");
        return 1;
    }
    int **mat1 = allocateMatrix(r1, c1);
    int **mat2 = allocateMatrix(r2, c2);
    printf("Matrix 1:\n");
    readMatrix(mat1, r1, c1);
    printf("Matrix 2:\n");
    readMatrix(mat2, r2, c2);
    printf("Matrix 1:\n");
    displayMatrix(mat1, r1, c1);
    printf("Matrix 2:\n");
    displayMatrix(mat2, r2, c2);
    int **product = multiplyMatrices(mat1, mat2, r1, c1, c2);
    printf("Product of matrices:\n");
    displayMatrix(product, r1, c2);
    freeMatrix(mat1, r1);
    freeMatrix(mat2, r2);
}
