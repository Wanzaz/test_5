#include <stdio.h>
#include <stdlib.h>

/*
1. Máme matici n × n   typu char. Uložte na diagonálu (vedlejší diagonálu, obvod) hvězdičky a všude jinde mezery.
1. We have a matrix n × n of type char. Place asterisks on the diagonal (secondary diagonal, perimeter) and spaces everywhere else.
*/

void side_diagonal(char mat[][100], int size);
void list(char mat[][100], int size);

int main()
{
    char mat[100][100];
    int size;
    printf("Enter size of a matrix: ");
    scanf("%d", &size);

    side_diagonal(mat, size);
    list(mat, size);

    return 0;
}

void list(char mat[][100], int size)
{
    int i, j;
    for(i=0;i < size;i++)
    {
        for(j=0;j < size;j++)
        {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}

void side_diagonal(char mat[][100], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if((i + j) == size - 1)
                mat[i][j] = '*';
            else
                mat[i][j] = ' ';
        }
    }
}

