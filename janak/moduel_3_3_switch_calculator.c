#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    float result;
    char opr;

    printf("Choose this operator(+,-,*,/) : ");
    scanf("%c", &opr);

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    switch (opr)
    {
    case '+':
        result = a + b;
        break;

    case '-':
        result = a - b;
        break;

    case '*':
        result = a * b;
        break;

    case '/':
        if (b == 0)
        {
            printf("Erroe : division by 0");
        }
        else
        {
            result = a / b;
        }
        break;

    default:
        printf("Invalid operator");
        break;
    }

    printf("Result is : %f", result);
    return 0;
}