#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j, k=1;

    printf("Enter any number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }

    return 0;
}