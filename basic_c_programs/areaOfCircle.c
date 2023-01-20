#include<stdio.h>

int main(int argc, char const* argv[])
{
    float r;
    double area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("\nThe area of the circle is %.2lfsq units", area);
    return 0;
}
