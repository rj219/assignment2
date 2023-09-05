#include <stdio.h>
#include <conio.h>

int main()
{
    int a,i,fact=1;

    printf("Enter No : ");
    scanf("%d",&a);

    for (i = 1; i <=a; i++)
    
        fact=fact*i;

        printf("fctorial of %d is : %d\n",a,fact);

    
    
    return 0;
}