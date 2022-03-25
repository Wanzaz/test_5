#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
   15. Máme matici typu n × m . Napište funkci, která vezme tuto matici a přehodí v ní první a poslední řádek (sloupec).
   15. We have a matrix of type n × m. Write a function that takes this matrix and swaps the first and last rows (columns) in it.
 */


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

	printf("---------------------------------------\n");

	fills_array(rows, cols, mat, array);
	list_array(array, rows*cols);

	return 0;
}


void swap_first_row_with_last(int rows, int cols, int mat[rows][cols])
{
	int i, j;

	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{

		}
	}
}

void init_random(int rows, int cols, int mat[rows][cols])
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
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
