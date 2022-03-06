#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
3. Máme matici n × n   celých čísel . Napište funkci, která vrací součet čísel na obou diagonálách.
3. We have a matrix of n × n integers. Write a function that returns the sum of the numbers on both diagonals.
*/

int total_of_diagonals(int mat[][100], int n);
void list(int mat[][100], int size);
void diagonals(int mat[][100], int size);

int main()
{
    int mat[100][100];
    int size;
    printf("Enter size of a matrix: ");
    scanf("%d", &size);

    diagonals(mat, size);
    list(mat, size);

    printf("The total of both diagonals is %d", total_of_diagonals(mat, size));

    return 0;
}

void list(int mat[][100], int n)
{
    int i, j;
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void diagonals(int mat[][100], int size)
{
    srand(time(0));

    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if((i==j) | ((i + j) == size - 1))
                mat[i][j] = rand() % 10;
        }
    }
}

int total_of_diagonals(int mat[][100], int size)
{
    int i, j, total;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if((i==j) | ((i + j) == size - 1))
                total += mat[i][j];
        }
    }
    return total;
}


