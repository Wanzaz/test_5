
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
10. Máme obdélníkovou matici n × m reálných čísel. Napište funkci, která vrátí největší (nejmenší) číslo v matici.
10. We have a rectangular matrix of n × m real numbers. Write a function that returns the largest (smallest) number in the array.
*/


void list(int mat[] [100], int size_column, int size_row);
void init_random(int mat[][100], int size_column, int size_row);
int largest_number(int mat[][100], int size_column, int size_row);

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

    printf("The largest number of matrix is %d\n", largest_number(mat, size_column, size_row));

    return 0;
}


int largest_number(int mat[][100], int size_column, int size_row)
{
    int i, j, largest_number;
    largest_number = mat[0][0];

    for(i = 0; i < size_column; i++)
    {
        for(j = 0; j < size_row; j++)
        {
            if(largest_number < mat[i][j])
            {
                largest_number = mat[i][j];
            }
        }
    }
    return largest_number;
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


