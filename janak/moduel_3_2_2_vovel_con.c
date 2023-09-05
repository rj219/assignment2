#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    printf("Enter Any alphabet : ");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
        printf("%c is vowel", c);
        break;

    case 'e':
        printf("%c is vowel",c);

        break;

    case 'i':
        printf("%c is vowel",c);
        break;

    case 'o':
        printf("%c is vowel",c);
        break;

    case 'u':
        printf("%c is vowel",c);
        break;

    case 'A':
        printf("%c is vowel",c);
        break;

    case 'E':
        printf("%c is vowel",c);
        break;

    case 'I':
        printf("%c is vowel",c);
        break;

    case 'O':
        printf("%c is vowel",c);
        break;

    case 'U':
        printf("%c is vowel",c);
        break;

    default:
        printf("%c is Constant", c);
        break;
    }
    return 0;
}