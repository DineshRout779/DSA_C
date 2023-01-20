#include<stdio.h>

int main(int argc, char const* argv[])
{
    int inum;
    float fnum;

    printf("Enter any integer: ", inum);
    scanf("%d", &inum);

    fnum = inum;
    printf("Flaot: %f", fnum);

    return 0;
}
