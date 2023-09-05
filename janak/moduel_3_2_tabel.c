#include <stdio.h>
#include <conio.h>

int main()
{
    int a,i,j;

    printf("Enter table no : ");
    scanf("%d",&a);

    for (i = 1; i <=10 ; i++)
    {
      for (j = 1; j <=10; j++)
      {
        printf("%d * %d = %d\n",i,j,i*j);
      }
      printf("\n");
      
    }
    
    
    return 0;
}