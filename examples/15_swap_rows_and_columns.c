#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *    15. Máme matici typu n × m . Napište funkci, která vezme tuto matici a přehodí v ní první a poslední řádek (sloupec).
 *       15. We have a matrix of type n × m. Write a function that takes this matrix and swaps the first and last rows (columns) in it.
 *        */

void swap_first_column_with_last(int rows, int cols, int mat[rows][cols]);
void swap_first_row_with_last(int rows, int cols, int mat[rows][cols]);
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

	swap_first_row_with_last(rows, cols, mat);
	list(rows, cols, mat);

	printf("---------------------------------------\n");

	swap_first_column_with_last(rows, cols, mat);
	list(rows, cols, mat);

	return 0;
}


void swap_first_row_with_last(int rows, int cols, int mat[rows][cols])
{
	int i, help;

	for(i = 0; i < rows + 1; i++)
	{
		help = mat[0][i];
		mat[0][i] = mat[rows - 1][i];
		mat[rows - 1][i] = help;
	}
}

void swap_first_column_with_last(int rows, int cols, int mat[rows][cols])
{
	int i, j, help;

	for(i = 0; i < rows + 1; i++)
	{
		help = mat[i][0];
		mat[i][0] = mat[i][cols - 1];
		mat[i][cols - 1] = help;
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

