
#include <stdio.h>

int main()
{
    int a, maxDigit = -1,digit;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0)
    {
        a = -a;
    }

    while (a > 0)
    {
         digit = a % 10;
        if (digit > maxDigit)
        {
            maxDigit = digit;
        }
        a /= 10;
    }

    if (maxDigit >= 0)
    {
        printf("The maximum digit is: %d\n", maxDigit);
    }
    else
    {
        printf("No valid digits found.\n");
    }

    return 0;
}
