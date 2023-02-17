#include<stdio.h>

int main(int argc, char const* argv[])
{
    int num, rev_num = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    int original_num = num;

    while (num != 0)
    {
        rev_num = (rev_num * 10) + (num % 10);
        num /= 10;
    }

    if (rev_num == original_num) {
        printf("\nThe number is pallindrom");
    }
    else {
        printf("\nThe number is not pallindrom");
    }

    return 0;
}
