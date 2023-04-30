// find duplicate number

#include<iostream>
using namespace std;

int main() {
    int arr[] = { 1,2,1,3,4,5 };
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n;j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate number: " << arr[i] << " found at index: " << j << endl;
                break;
            }
        }
    }
    return 0;
}