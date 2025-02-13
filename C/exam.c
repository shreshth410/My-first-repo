#include <stdio.h>

void trace( int m, int n, int array[m][n])
{
    int trc = 0;

    for (int i = 0; i < m; i++)
    {
        trc += array[i][i];
    }

    printf("Trace: %d\n", trc);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] == 0)
            {
                array[i][j] = trc;
            }
        }
    }
}

int main(void)
{
    int m, n;
    do 
    {
        printf("Enter order: ");
        scanf("%dx%d", &m,&n);
    }while ((m<0 || n<0) || m!=n);

    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element %d-%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Initial matrix: \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

   
    trace(m, n, a);
    
    printf("Modified matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
