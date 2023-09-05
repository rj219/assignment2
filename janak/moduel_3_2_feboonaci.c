#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b = 0, c = 1, i, k;

    printf("Enter a Number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)

        printf("%d ", b);
    {
        k = b + c;
        b = c;
        c = k;
    }

    return 0;
}