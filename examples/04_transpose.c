#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

/*
   4. M�me matici n � n. Napi�te funkci, kter� vezme matici a p�evr�t� ji podle hlavn� diagon�ly.
   4. We have a matrix n � n. Write a function that takes a matrix and flips it according to the main diagonal.
 */

void list(int mat[][100], int size);
void transpose(int mat[][100], int size);
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

	transpose(mat, size);
	list(mat, size);

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

void transpose(int mat[][100], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			int tmp = mat[i][j];
			mat[i][j] = mat[size - 1 - i][size - 1 - j];
			mat[size - 1 - i][size - 1 - j] = tmp;
		}
	}
}

void init_random(int mat[][100], int n)
{
	//srand(time(0));
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i==j)
				mat[i][j] = 0;
			else
				mat[i][j] = j; //rand() % 10
		}
	}
}

