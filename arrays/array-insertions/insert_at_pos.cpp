#include<iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cout << "Enter the number of items: " << endl;
    cin >> n;

    cout << "Enter the items: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int item;
    cout << "Enter the item: ";
    cin >> item;

    for (int i = 0; i < n;i++) {
        if (arr[i] > item) {
            for (int j = n - 1; j >= i; j--) {
                arr[j + 1] = arr[j];
            }
            arr[i] = item;
            break;
        }
    }

    n = n + 1;

    cout << "\nAfter insertion array is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}

// 1 2 4 5 6 <- 3
// 1 2 3 4 5 6