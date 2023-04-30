#include<iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cout << "Enter the number of items: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter the item " << i << ": ";
        cin >> arr[i];
    }

    cout << "The initial array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    n = n + 1;

    int item;
    cout << "\nEnter the new item: ";
    cin >> item;

    arr[n] = item;

    cout << "\nItem inserted successfully!" << endl;

    cout << "\nAfter insertion of element in array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;

}