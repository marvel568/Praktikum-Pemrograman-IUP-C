#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter " << size << " elements: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    selectionSort(arr, size);

    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}