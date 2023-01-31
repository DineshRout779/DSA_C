#include<stdio.h>
int main()
{
    int count, first_term = 0, second_term = 1, next_term, i;

    //Ask user to input number of terms 
    printf("Enter the number of terms:\n");
    scanf("%d", &count);

    printf("First %d terms of Fibonacci series:\n", count);
    printf("%d %d ", first_term, second_term);
    for (i = 2; i < count; i++) {
        next_term = first_term + second_term;
        printf("%d ", next_term);
        first_term = second_term;
        second_term = next_term;
    }

    return 0;
}