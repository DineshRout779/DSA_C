#include<iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "\nEnter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "\nThe array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}