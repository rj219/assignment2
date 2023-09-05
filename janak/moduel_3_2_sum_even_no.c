#include <stdio.h>

int main()
{
    int a, num = 0, i, result;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Multiplication table for %d:\n", a);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    for (i = 1; i <= 10; i++)
    {
        result = a * i;
        
        if (result % 2 == 0)
        {
            num += result;
        }
    }

    printf("Sum of even numbers in the table: %d\n", num);

    return 0;
}
