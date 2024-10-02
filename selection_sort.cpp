#include <iostream>
#include<array>
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

void selection_sort(std::array<int, 10>& Arr){

    for (int i = 0; i < Arr.size(); i++){
        for (int j = i + 1; j < Arr.size(); j++){
            if (Arr[i] > Arr[j]){
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }   
        }   
    }

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


std::array <int, 10> arr = {19,20,13,14,5,85,1,31,40,3};
    selection_sort(arr);
    for (int i = 0; i < 10; i++){

        std::cout <<" Sorted Array " << arr[i] << "\n";

    }


    return 0;
}
