#include <stdio.h>
#include <stdlib.h>
#include <time.h> //needed for random numbers

/*
0. Naètìte a vytisknìte matici n × n. (náhodná èísla).
0. Read and print the matrix n × n. (Random numbers).
*/

void list(int p[] [100], int n);
void init_random(int p[] [100], int n);

int main()
{
    int mat[100][100];
    int n;
    printf("Enter size of a matrix: ");
    scanf("%d", &n);
    init_random(mat, n);
    list(mat, n);
    return 0;
}

void init_random(int mat[] [100], int n)
{
    srand(time(0));
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            mat[i][j] = rand() % 100; // stlib.h function but you need the time.h for the randomness
    }
}

void list(int mat[] [100], int n)
{
    int i, j;
    for(i = 0; i < n ; i++)
    {
        for(j = 0; j < n ; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

}

