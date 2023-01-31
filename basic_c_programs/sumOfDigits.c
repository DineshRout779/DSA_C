#include<stdio.h>

int main() {
    int sum = 0;

    while (1)
    {
        int n;
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);

        if (n == 0)
            break;
        else
            sum += n;
    }

    printf("\nThe sum of digits is = %d", sum);

    return 0;
}