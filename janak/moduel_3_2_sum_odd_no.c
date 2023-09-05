#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, num = 0, result;

    printf("Enter The number : ");
    scanf("%d", &a);

    printf("Multiplication table for : %d\n",a);
    
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    for (i = 1; i <= 10; i++)
    {
        result = a * i;
        if (result % 2 != 0)
        {
            num += result;
        }
    }

    printf("Sum of odd number in the table : %d\n",num);

    return 0;
}