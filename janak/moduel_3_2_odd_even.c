#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    char* result = (num % 2 == 0) ? "even" : "odd";

    printf("%d is %s.\n", num, result);

    return 0;
}
