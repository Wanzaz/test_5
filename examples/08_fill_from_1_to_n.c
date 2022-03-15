#include <stdio.h>
#include <stdlib.h>

/*
8. Máme matici n × m. Do prvního řádku vložte samé jedničky, do druhého řádku dvojky atd. až do n-1. řádku vložte samá čísla n. Zkuste to také do sloupců.
8. We have a matrix n × m. Insert only ones in the first line, two in the second line, etc. up to n-1. enter the numbers n in the row. Try this in the columns as well.
*/

void insert_numbers_in_rows(int mat[][100], int size_column, int size_row);
void insert_numbers_in_columns(int mat[][100], int size_column, int size_row);
void list(int mat[] [100], int size_column, int size_row);

int main()
{
    int mat[100][100];
    int size_column, size_row;
    printf("Enter size of matrix column: ");
    scanf("%d", &size_column);
    printf("Enter size of matrix row: ");
    scanf("%d", &size_row);

    insert_numbers_in_rows(mat, size_column, size_row);
    list(mat, size_column, size_row);

    printf("\n------------------------------\n\n");

    insert_numbers_in_columns(mat, size_column, size_row);
    list(mat, size_column, size_row);

    return 0;
}

void insert_numbers_in_rows(int mat[][100], int size_column, int size_row)
{
    int column, row;
    for(column = 0; column < size_column ; column++)
    {
        for(row = 0; row < size_row ; row++)
            mat[column][row] = column + 1;
    }
}

void insert_numbers_in_columns(int mat[][100], int size_column, int size_row)
{
    int column, row;
    for(column = 0; column < size_column ; column++)
    {
        for(row = 0; row < size_row ; row++)
        {
            mat[column][row] = row + 1;
        }
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



