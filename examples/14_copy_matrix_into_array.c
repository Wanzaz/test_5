#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
14. Máme matici mat1 typu n × m . Napište funkci, která vezme tuto matici a jednorozměrné pole o vhodné délce a překopíruje z matice do pole všechny prvky.
14. We have a matrix mat1 of type n × m. Write a function that takes this matrix and a one-dimensional array of suitable length and copies all elements from the array to the array.
*/

void list_array(int a[], int size);
void fills_array(int rows, int cols, int mat[rows][cols], int array[rows*cols]);
void init_random(int rows, int cols, int mat[rows][cols]);
void list(int rows, int cols, int mat[rows][cols]);

int main()
{
    srand( (unsigned) time(NULL));
    int mat[100][100];
    int array[100];
    int rows, cols;
    printf("Enter size of matrix row: ");
    scanf("%d", &rows);
    printf("Enter size of matrix column: ");
    scanf("%d", &cols);

    init_random(rows, cols, mat);
    list(rows, cols, mat);

    printf("---------------------------------------\n");

    fills_array(rows, cols, mat, array);
    list_array(array, rows*cols);

    return 0;
}


void fills_array(int rows, int cols, int mat[rows][cols], int array[rows*cols])
{
    int i, j, index=0;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            array[index] = mat[i][j];
            index++;
        }
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

void list(int rows, int cols, int mat[rows][cols])
{
    int i, j;
    for(i = 0; i < rows ;i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d", mat[i][j]);
        printf("\n");
    }
}

void list_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
