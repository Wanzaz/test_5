#include <stdio.h>
#include <stdlib.h>

/*
2. Totéž zadání, ale vytiskněte šachovnici, znak pro obdélníček: #219 = ’\333’
2. Same entry, but print a checkerboard, a character for a rectangle: # 219 = ’\ 333’
*/

void chess(char mat[][100], int n);
void list(char mat[][100], int size);

int main()
{
    char mat[100][100];
    int size;
    printf("Enter size of a matrix: ");
    scanf("%d", &size);

    chess(mat, size);
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

void chess(char mat[][100], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if((i+j)%2==0)
                mat[i][j] = '\333';
            else
                mat[i][j] = ' ';
        }
    }
}


