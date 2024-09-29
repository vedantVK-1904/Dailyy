#include <iostream>

int* selection_sort(int input_array[], int array_size) {
    for (int i = 0; i < array_size - 1; i++) {
        for (int j = i + 1; j < array_size; j++) {
            if (input_array[i] > input_array[j]) {
                int temp = input_array[i];
                input_array[i] = input_array[j];
                input_array[j] = temp;
            }
        }
    }
    return input_array;  // Return pointer to the sorted array
}

int main() {
    int input_array[] = {64, 25, 12, 22, 11};
    int array_size = sizeof(input_array) / sizeof(input_array[0]);

    // Call selection_sort and print the sorted array
    int* sorted_array = selection_sort(input_array, array_size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < array_size; i++) {
        std::cout << sorted_array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
