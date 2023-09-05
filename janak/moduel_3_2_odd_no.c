#include <stdio.h>
#include <conio.h>

int main()
{
    int i, a, num = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Ente No : ");
        scanf("%d", &a);
    }

    if (a % 2 != 0)
    {
        num++;
    }

    printf("Number of odd number is : %d\n",num);

    return 0;
}