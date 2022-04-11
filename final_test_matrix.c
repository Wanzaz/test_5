#include <stdio.h>
#include <stdlib.h>

void init_o(int rows, int cols, char mat[rows][cols]);
void list(int rows, int cols, char mat[rows][cols]);
void circuit(int rows, int cols, char mat[rows][cols]);

int main()
{
	int cols, rows;
	printf("Enter size of column matrix: ");
	scanf("%d", &cols);
	printf("Enter size of row matrix: ");
	scanf("%d", &rows);;

	char mat[rows][cols];

	init_o(rows, cols, mat);
	circuit(rows, cols, mat);
	list(rows, cols, mat);
}

void init_o(int rows, int cols, char mat[rows][cols])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			mat[i][j] = 'o';
	}
}

void list(int rows, int cols, char mat[rows][cols])
{
	int i,j;
	printf("\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			printf("%c ", mat[i][j]);
		printf("\n");
	}
}

void circuit(int rows, int cols, char mat[rows][cols])
{
	int i, j;
	for(i=0; i < rows;i++)
	{
		for(j=0; j < cols;j++)
		{
			if((j==0) || (j==cols-1))
				mat[i][j] = '*';
			if((i==0) || (i==rows-1))
				mat[i][j] = '*';
		}
	}
}

/*
// My solution on test but is is the wrong
void circuit(int rows, int cols, char mat[rows][cols])
{
	int index, j;
	for(index=0; index < rows;index++)
	{
		mat[0][index] = '*'; // frist line
		mat[rows - 1][index] = '*'; // last line
	}

	for(j=0; j < cols;j++)
	{
		mat[j][0] = '*'; // first column
		mat[j][cols - 1] = '*'; // last column
	}
}*/
