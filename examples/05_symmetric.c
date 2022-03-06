#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
5. Máme čtvercovou matici n × n. Zjistěte, zda tato matice je symetrická podle hlavní (vedlejší) diagonály.
5. We have a square matrix n × n. Find out if this matrix is symmetric according to the main (secondary) diagonal.
*/

void list(int mat[][100], int size);
int symmetric(int mat[][100], int size);
void init_random(int mat[][100], int n);

int main()
{
    int mat[100][100];
    int size;
    printf("Enter size of a matrix: ");
    scanf("%d", &size);

    init_random(mat, size);
    list(mat, size);

    printf("------------------------------------------------------\n");

    if(symmetric(mat, size) == 1)
        printf("The matrix is symmetric");
    else
        printf("The matrix is not symmetric");

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

int symmetric(int mat[][100], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < i; j++)
        {
            if(mat[i][j] == mat[size - 1 - i][size - 1 - j])
                ;
            else
                return 0;
        }
    }
    return 1;
}

void init_random(int mat[][100], int n)
{
    srand(time(0));

    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 10; //not symmetric
            // mat[i][j] = 1; symmetric
        }
    }
}


