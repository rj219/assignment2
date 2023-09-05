#include <stdio.h>

int main()
{
    int a, sum, fd, ld;
    printf("Enter a number: ");
    scanf("%d", &a);

    ld = a % 10;

    fd = a;
    while (fd >= 10)
    {
        fd /= 10;
    }

    sum = fd + ld;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}
