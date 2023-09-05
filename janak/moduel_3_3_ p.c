#include <stdio.h>
#include <conio.h>

int main()
{
    int a, sum = 0, r, c;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    c = a;

    while (a > 0)
    {
        r = a % 10;
        sum = r + (sum * 10);
        a = a / 10;
    }

    if (c == sum)
    {
        printf("The number is  palindrome");
    }

    else
    {
        printf("The number i not  palindrome");
    }

    return 0;
}