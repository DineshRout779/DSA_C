#include<stdio.h>

int main(int argc, char const* argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("\neven") : printf("\nodd");
    return 0;
}
