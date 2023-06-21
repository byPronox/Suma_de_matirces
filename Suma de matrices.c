#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x[3][2], y[3][2], r[3][2];
    int i, j;

    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x[i][j] = rand() % 10 + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            y[i][j] = rand() % 10 + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            r[i][j] = x[i][j] + y[i][j];
        }
    }

    printf("\nResultado de la suma:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
