#include<iostream>
using namespace std;

int main() {
    int small, pos;
    int arr[] = { 2,5,1,3,4,8 };

    small = arr[0];

    for (int i = 1; i < 6; i++) {
        if (small > arr[i]) {
            small = arr[i];
            pos = i;
        }
    }

    printf("\nThe position of the smallest number %d is %d", small, pos);
    return 0;

}