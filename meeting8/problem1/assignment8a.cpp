#include <iostream>

void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSortDescending(arr, size);

    std::cout << "Sorted array in descending order: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}