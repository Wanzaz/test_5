#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
17. Máme matici znaků typu n × m . Napište funkci, která vezme tuto matici a znak a vrátí počet těchto znaků v matici.
17. We have a matrix of characters of type n × m. Write a function that takes this array and character and returns the number of these characters in the array.
*/

void init_random(int rows, int cols, char mat[rows][cols]);
void list(int rows, int cols, char mat[rows][cols]);
int count_x(int rows, int cols, char mat[rows][cols], char character);

int main()
{
    srand( (unsigned) time(NULL));

    char mat[100][100];
    
    int rows, cols;
    printf("Enter size of matrix row: ");
    scanf("%d", &rows);
    printf("Enter size of matrix column: ");
    scanf("%d", &cols);

    char character;
    printf("Enter a character: ");
    scanf("\n%c", &character);


    init_random(rows, cols, mat);
    list(rows, cols, mat);

    printf("---------------------------------------\n");

    printf("Character %c was found %d times\n", character, count_x(rows, cols, mat, character));

    return 0;
}


int count_x(int rows, int cols, char mat[rows][cols], char character)
{
    int i, j, counter=0;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(character == mat[i][j])
                counter++;
        }
    }

    return counter;
}

void init_random(int rows, int cols, char mat[rows][cols])
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            mat[i][j] = 'a';
    }
}

void list(int rows, int cols, char mat[rows][cols])
{
    int i, j;
    for(i = 0; i < rows ;i++)
    {
        for(j = 0; j < cols; j++)
            printf("%c", mat[i][j]);
        printf("\n");
    }
}

