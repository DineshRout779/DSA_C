#include<stdio.h>

int biggest(int a, int b) {
    return a > b ? a : b;
}

int main(int argc, char const* argv[])
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Largest of %d, %d and %d is %d", a, b, c, biggest(biggest(a, b), c));
    return 0;
}
