#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &min, int &max) {
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minv, maxv;
    findMinMax(arr, size, minv, maxv);

    cout << "Smallest value: " << minv << endl;
    cout << "Largest value: " << maxv << endl;

    delete[] arr;

    return 0;
}


