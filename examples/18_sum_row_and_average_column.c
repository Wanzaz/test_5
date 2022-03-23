#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
6. M�me dvourozm�rn� pole cel�ch ��sel. Na konec p�idejte jeden sloupec a vlo�te do n�j sou�et ��dk�.
   Pak p�idejte ��dek a vlo�te do n�j zaokrouhlen� pr�m�r sloupc�.
6. We have a two-dimensional array of integers.
   Add one column at the end and insert the sum of the rows. Then add a row and insert a rounded column diameter.
*/

void list(int mat[][100], int size);
void sum_row(int mat[][100], int size);
void sum_column(int mat[][100], int size);
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

    sum_column(mat, size);
    sum_row(mat, size);
    list(mat, size + 1);

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

void init_random(int mat[][100], int n)
{
    srand(time(0));

    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 10; 
        }
    }
}

void sum_row(int mat[][100], int size)
{
    int i=0, j=0, row=0;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            row += mat[i][j];

            if(size - 1 == j)
            {
                mat[i][j + 1] = row;
                row = 0;
            }
        }
    }
}

void sum_column(int mat[][100], int size)
{
    int i=0, j=0, column=0;
    for(j = 0; j < size; j++)
    {
        for(i = 0; i < size; i++)
        {
            column += mat[i][j];

            if(size - 1 == i)
            {
                mat[i + 1][j] = column/size;
                column = 0;
            }
        }
    }
}
