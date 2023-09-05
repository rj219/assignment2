#include <stdio.h>
#include <conio.h>

int main()
{
    int a;

    printf("Enter The Year : ");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        printf("%d is Leap year", a);
    }
    else
    {
        printf("%d is not Leap year",a);
    }

    return 0;
}