#include <stdio.h>


int main()
{
    char string[100], *e;

    printf("Enter string: ");
    scanf("%[^\n]s", string);

    e = string;

    while (*e != '\0')
    {
        printf("%c", *e);
        e++;
    }
}