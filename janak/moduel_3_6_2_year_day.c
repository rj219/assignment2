#include <stdio.h>
#include <conio.h>

int main()
{
    int  years,days;

    printf("Enter The number of years : ");
    scanf("%d",&years);

    days=365*years;

    printf("The number of day is : %d",days);
    return 0;
}