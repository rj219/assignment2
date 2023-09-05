#include <stdio.h>

int main() 
{
    int a,num=0;

    for (int i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &a);

        if ( a% 2 == 0) {
            num++;
        }
    }

    printf("Number of even numbers: %d\n", num);

    return 0;
}
