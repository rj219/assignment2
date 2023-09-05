#include <stdio.h>
#include <conio.h>

int main()
{

    int a,r,sum=0;

    printf("Enter any Number : ");
    scanf("%d",&a);

    while (a>0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }

    printf("Sum of Number is : %d",sum);
    
    
    return 0;
}