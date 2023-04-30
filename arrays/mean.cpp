#include<iostream>
using namespace std;

int main() {
    int size, sum = 0;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "\nEnter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
        sum += arr[i];
    }

    float mean = sum / size;

    cout << "The mean is: " << mean;
    return 0;

}