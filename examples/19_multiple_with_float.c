#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
19. Máme matici n × m reálných čísel a reálné číslo x. Napište funkci, která vezme matici a to číslo x a všechna čísla v matici vynásobí číslem x.
19. We have a matrix of n × m real numbers and a real number x. Write a function that takes a matrix with the number x and multiplies all numbers in the matrix by the number x.
*/

void multiple_value_with_number(int rows, int cols, float mat[rows][cols], float num);
void init_random(int rows, int cols, float mat[rows][cols]);
void list(int rows, int cols, float mat[rows][cols]);

int main()
{
    srand(time(NULL));
    float mat[100][100];
    
    int rows, cols;
    printf("Enter size of matrix row: ");
    scanf("%d", &rows);
    printf("Enter size of matrix column: ");
    scanf("%d", &cols);

    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    init_random(rows, cols, mat);
    list(rows, cols, mat);

    printf("---------------------------------------\n");

    multiple_value_with_number(rows, cols, mat, num);
    list(rows, cols, mat);

    return 0;
}


void multiple_value_with_number(int rows, int cols, float mat[rows][cols], float num)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            mat[i][j] = mat[i][j] * num;
        }
    }
}

void init_random(int rows, int cols, float mat[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            mat[i][j] = rand() % 10;
    }
}

void list(int rows, int cols, float mat[rows][cols])
{
    int i, j;
    for(i = 0; i < rows ;i++)
    {
        for(j = 0; j < cols; j++)
            printf("%f", mat[i][j]);
        printf("\n");
    }
}

