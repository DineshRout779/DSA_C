#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int arr[] = { 1,2,3,4,5 };
    int num = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        num = num + arr[i] * pow(10, i);
    }

    cout << "The number formed is: " << num;
    return 0;
}