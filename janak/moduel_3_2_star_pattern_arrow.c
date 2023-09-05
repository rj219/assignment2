#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j;

    printf("Enter a number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = a - 1; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}