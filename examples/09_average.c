#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
9. We have a rectangular matrix of n × m real numbers. Write a function that returns the sum (average) of the numbers in the matrix.
9. Máme obdélníkovou matici n × m reálných čísel. Napište funkci, která vrací součet (průměr) čísel v matici.
*/


int average(int rows, int cols, int mat[rows][cols]);
void init_random(int rows, int cols, int mat[rows][cols]);
void list(int rows, int cols, int mat[rows][cols]);

int main()
{
    srand( (unsigned) time(NULL));
    int mat[100][100];
    int rows, cols;
    printf("Enter size of matrix row: ");
    scanf("%d", &rows);
    printf("Enter size of matrix column: ");
    scanf("%d", &cols);

    init_random(rows, cols, mat);
    list(rows, cols, mat);

    printf("\n------------------------------\n\n");

    printf("The average is %d\n", average(rows, cols, mat));

    return 0;
}

int average(int rows, int cols, int mat[rows][cols])
{
    int i, j, av=0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            av += mat[i][j];
    }
    return av/(rows*cols);
}

void init_random(int rows, int cols, int mat[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
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


