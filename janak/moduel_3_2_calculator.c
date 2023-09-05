#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,module;
    char operator;

    printf("Choose the operator from (+-*/) : " );
    scanf("%c",&operator);

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    module=a%b;

    switch(operator)
    {
        case '+':
        
        printf ("The answer of choosen operator is %d + %d = %d" ,a,b,a+b);
        break;

        case '-':
        printf("\n The answer of choosen operator is  %d - %d = %d",a,b,(a-b));
        break;

        case '*':
        printf("\n The answer of choosen operator is   %d * %d = %d ",a,b,(a*b));
        break;

        case '/':
        printf("\n The answer of choosen operator is %d / %d = %f ",a,b,(float)(a/b));
        break;
        
        default:
        {
            printf("Enter the valid operator");
        }
        
        }

        printf("\nThe module of the %d & %d is %f ", a,b,(float)(a%b));
    
}