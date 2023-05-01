#include<iostream>
using namespace std;

int main() {
    int a[10], b[20], c[30];
    int i, n1, n2, m, index;
    int first_index = 0, second_index = 0;

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter the elements: ";
    for (i = 0; i < n1;i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter the elements: ";
    for (i = 0; i < n2;i++) {
        cin >> b[i];
    }

    m = n1 + n2;

    while (first_index < n1 && second_index < n2) {
        if (a[first_index] < b[second_index]) {
            c[index] = a[first_index];
            first_index++;
        }
        else {
            c[index] = b[second_index];
            second_index++;
        }
        index++;
    }

    if (first_index == n1) {
        cout << "here";
        while (second_index < n2)
        {
            c[index] = b[second_index];
            second_index++;
            index++;
        }

    }

    else if (second_index == n2) {
        cout << "there";
        while (first_index < n1)
        {
            c[index] = a[first_index];
            first_index++;
            index++;
        }

    }

    cout << "\nThe merged array is: ";
    for (i = 0; i < m;i++) {
        cout << c[i] << " ";
    }
    return 0;

}
