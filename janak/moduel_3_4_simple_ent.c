#include <stdio.h>
#include <conio.h>

int main()
{

    float principal,rate,time,si;

    printf("Enter The value of Principal : ");
    scanf("%f",&principal);

    printf("Enter The value of Rate : ");
    scanf("%f",&rate);

    printf("Enter The Time value : ");
    scanf("%f",&time);

    si=(principal*rate*time)/100;

    printf("Simple interest is : %f",si);



    return 0;
}