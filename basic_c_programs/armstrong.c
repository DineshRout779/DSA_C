#include<stdio.h>

int main(int argc, char const* argv[])
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original_num = num;

    while (num > 0) {
        int rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }

    if (original_num == sum) {
        printf("The number is armstrong!");
    }
    else {
        printf("The number is not armstrong!");
    }

    return 0;
}
