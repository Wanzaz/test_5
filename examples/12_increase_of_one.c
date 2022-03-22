#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
12. Máme matici typu n × n . Napište funkci, která vyplní matici tak, že do prvního prvku ([0, 0]) uloží  číslo předané jako parametr a do každé další buňky uloží číslo o 1 větší.
12. We have a matrix of type n × n. Write a function that fills the matrix by storing the number passed as a parameter in the first element ([0, 0]) and storing a number 1 larger in each next cell.
*/

void list(int size, int mat[][size]);
void init_random(int size, int mat[][size]);
void increase_of_one(int size, int parametr_number, int mat[][size]);

int main()
{
    int mat[100][100];
    int size, num;
    printf("Enter size of a matrix: ");
    scanf("%d", &size);
    printf("Enter the number that will be located at [0,0] position: ");
    scanf("%d", &num);

    init_random(size, mat);
    list(size, mat);

    printf("------------------------------------------------------\n");

    increase_of_one(size, num, mat);
    list(size, mat);

    return 0;
}

void list(int size, int mat[][size])
{
    int i, j;
    for(i = 0; i < size ; i++)
    {
        for(j = 0; j < size ; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void init_random(int size, int mat[][size])
{
    srand(time(0));

    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            mat[i][j] = rand() % 10; 
        }
    }
}

void increase_of_one(int size, int parametr_number, int mat[][size])
{
    int i, j;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            mat[i][j] += 1;
        }
    }

    mat[0][0] = parametr_number;
}
