#include<stdio.h>

int main(int argc, char const* argv[])
{
    char c;
    printf("enter the character: ");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The character %c is a vowel", c);
        break;

    default:
        printf("The character %c is a consonant", c);
        break;
    }
    return 0;
}
