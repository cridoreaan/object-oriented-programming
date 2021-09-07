#include <iostream>
using namespace std;

int minNumber(int *arr, int size) {
    if (size == 0) 
        return -1;

    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) 
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[] = {10, 5, 6, 78};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int min = minNumber(arr, arrSize);
    cout << "The Minimum Number in the array is = " << min << endl;
    return 0;
}