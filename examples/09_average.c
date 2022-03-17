
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
9. We have a rectangular matrix of n × m real numbers. Write a function that returns the sum (average) of the numbers in the matrix.
9. Máme obdélníkovou matici n × m reálných čísel. Napište funkci, která vrací součet (průměr) čísel v matici.
*/


void list(int mat[] [100], int size_column, int size_row);
int average(int mat[][100], int size_column, int size_row);
void init_random(int mat[][100], int size_column, int size_row);

int main()
{
    srand( (unsigned) time(NULL));
    int mat[100][100];
    int size_column, size_row;
    printf("Enter size of matrix column: ");
    scanf("%d", &size_column);
    printf("Enter size of matrix row: ");
    scanf("%d", &size_row);

    init_random(mat, size_column, size_row);
    list(mat, size_column, size_row);

    printf("\n------------------------------\n\n");

    printf("The average is %d\n", average(mat, size_column, size_row));

    return 0;
}

int average(int mat[][100], int size_column, int size_row)
{
    int i, j, av=0;
    for (i = 0; i < size_column; i++)
    {
        for (j = 0; j < size_row; j++)
            av += mat[i][j];
    }
    return av/(size_column*size_row);
}

void init_random(int mat[][100], int size_column, int size_row)
{
    for (int i = 0; i < size_column; i++)
    {
        for (int j = 0; j < size_row; j++)
            mat[i][j] = rand() % 10;
    }
}

void list(int mat[][100], int size_column, int size_row)
{
    int column, row;
    for(column = 0; column < size_column ; column++)
    {
        for(row = 0; row < size_row ; row++)
            printf("%d ", mat[column][row]);
        printf("\n");
    }
}


