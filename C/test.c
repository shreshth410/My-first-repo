#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter order of matrix (n): ");
        scanf("%d", &n);
    }while (n < 0);

    int a[n][n];
    int s = n*n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element %d-%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    int b[s];
    int k = 0;
    while (k<s)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[k] = a[i][j];
                k++;
            }
        }
    }
    
    for (int i = 0; i < s; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");

    int move;
    printf("Enter number of spaces to shift: ");
    scanf("%d", &move);

    int c[s];
    move = move % s;

    for (int i = 0; i < s; i++)
    {
        c[(i+move)%s] = b[i];
    }

    for (int i = 0; i < s; i++)
    {
        printf("%d\t", c[i]);
    }    
}
