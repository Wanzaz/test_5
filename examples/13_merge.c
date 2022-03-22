#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
13. Máme dvě matice mat1 a mat2  typu n × m . Sečtěte tyto dvě matice do matice mat3. (po složkách)
13. We have two matrices mat1 and mat2 of type n × m. Add these two matrices to the mat3 matrix. (by folders)
*/

void list(int rows, int cols, int mat[rows][cols]);
void init_random(int rows, int cols, int mat[rows][cols]);
void merge(int rows, int cols, int mat[rows][cols], int mat2[rows][cols], int mat3[rows][cols]);

int main()
{
    int mat[100][100];
    int mat2[100][100];
    int mat3[100][100];
    int cols, rows;
    printf("Enter size of column matrix: ");
    scanf("%d", &cols);
    printf("Enter size of row matrix: ");
    scanf("%d", &rows);;

    init_random(rows, cols, mat);
    list(rows, cols, mat);

    printf("------------------------------------------------------\n");

    init_random(rows, cols, mat2);
    list(rows, cols, mat2);

    printf("------------------------------------------------------\n");

    merge(rows, cols, mat, mat2, mat3);
    list(rows, cols, mat3);

    return 0;
}

void list(int rows, int cols, int mat[rows][cols])
{
    int i, j;
    for(i = 0; i < rows ; i++)
    {
        for(j = 0; j <  cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void init_random(int rows, int cols, int mat[rows][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            mat[i][j] = rand() % 10;
    }
}

void merge(int rows, int cols, int mat[rows][cols], int mat2[rows][cols], int mat3[rows][cols])
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            mat3[i][j] = mat[i][j] + mat2[i][j];
        }
    }
}
