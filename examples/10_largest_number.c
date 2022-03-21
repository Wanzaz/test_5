#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
10. Máme obdélníkovou matici n × m reálných čísel. Napište funkci, která vrátí největší (nejmenší) číslo v matici.
10. We have a rectangular matrix of n × m real numbers. Write a function that returns the largest (smallest) number in the array.
*/


int largest_number(int rows, int cols, int mat[rows][cols]);
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

    printf("The largest number of matrix is %d\n", largest_number(rows, cols, mat));

    return 0;
}


int largest_number(int rows, int cols, int mat[rows][cols])
{
    int i, j, largest_number;
    largest_number = mat[0][0];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(largest_number < mat[i][j])
            {
                largest_number = mat[i][j];
            }
        }
    }
    return largest_number;
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


