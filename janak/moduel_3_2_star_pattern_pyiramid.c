#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j;

    printf("Enter a Number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = a; j >= i; j--)
        {
            printf(" ");
        }

        for (j = 1; j <=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}