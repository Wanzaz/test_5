#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
   16. Máme matici typu n × m . Napište funkci, která vrátí součet čísel v matici, která leží na obvodu matice (první a poslední řádky a sloupce).
   16. We have a matrix of type n × m. Write a function that returns the sum of the numbers in a matrix that lies on the perimeter of the matrix (first and last rows and columns).
 */

int total_of_circuit(int rows, int cols, int mat[rows][cols]);
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

	printf("The total of first row, column and last row, column is %d\n", total_of_circuit(rows, cols, mat));

	return 0;
}


int total_of_circuit(int rows, int cols, int mat[rows][cols])
{
	int index, j, total=0;
	for(index=0; index < rows;index++)
	{
		total += mat[0][index]; // frist line
		total += mat[rows - 1][index]; // last line
	}

	for(j=1; j < cols - 1;j++)
	{
		total += mat[j][0]; // first column
		total += mat[j][cols - 1]; // last column
	}

	return total;
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


