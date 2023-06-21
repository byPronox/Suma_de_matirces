#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Creacion de variables tanto para x, y y r como para los i y j para los for
    int x[3][2], y[3][2], r[3][2];
    int i, j;

    //Creacion de for para meter numeros rand en cada fila
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            x[i][j] = rand() % 10 + 1;
        }
    }
    //Creacion de for para meter numeros rand en cada columna
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            y[i][j] = rand() % 10 + 1;
        }
    }
    //Creacion de for para sumar cada fila con cada columna
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            r[i][j] = x[i][j] + y[i][j];
        }
    }

    //For con un print f para imprimir cada resultado

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
