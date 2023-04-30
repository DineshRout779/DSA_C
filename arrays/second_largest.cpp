#include<iostream>
using namespace std;


int main() {
    int arr[] = { 1,2,4,5,3,80,89,7,6 };

    int largest, second_largest;

    largest = second_largest = arr[0];

    // find the largest
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (largest < arr[i])
            largest = arr[i];

    }

    // find the smallest
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] != largest) {
            if (second_largest < arr[i])
                second_largest = arr[i];
        }
    }

    cout << "The second largest num is: " << second_largest;
    return 0;
}