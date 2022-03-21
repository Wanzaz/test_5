
#include <stdio.h>
#include <stdlib.h>

/*
8. Máme matici n × m. Do prvního řádku vložte samé jedničky, do druhého řádku dvojky atd. až do n-1. řádku vložte samá čísla n. Zkuste to také do sloupců.
8. We have a matrix n × m. Insert only ones in the first line, two in the second line, etc. up to n-1. enter the numbers n in the row. Try this in the columns as well.
*/

void insert_numbers_in_rows(int rows, int cols, int mat[rows][cols]);
void insert_numbers_in_columns(int rows, int cols, int mat[rows][cols]);
void list(int rows, int cols, int mat[rows][cols]);

int main()
{
    int mat[100][100];
    int cols, rows;
    printf("Enter size of matrix column: ");
    scanf("%d", &cols);
    printf("Enter size of matrix row: ");
    scanf("%d", &rows);

    insert_numbers_in_rows(rows, cols, mat);
    list(rows, cols, mat);

    printf("\n------------------------------\n\n");

    insert_numbers_in_columns(rows, cols, mat);
    list(rows, cols, mat);

    return 0;
}

void insert_numbers_in_rows(int rows, int cols, int mat[rows][cols])
{
    int i, j;
    for(i = 0; i < rows ;i++)
    {
        for(j = 0; j < cols; j++)
            mat[i][j] = i + 1;
    }
}

void insert_numbers_in_columns(int rows, int cols, int mat[rows][cols])
{
    int i, j;
    for(i = 0; i < rows ;i++)
    {
        for(j = 0; j < cols; j++)
            mat[i][j] = j + 1;
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


