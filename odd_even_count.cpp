#include <iostream>
#include <array>

std::array<int, 4> return_evenodd(const std::array<int, 25>& Arr) {
    int positive_even = 0, positive_odd = 0, negative_even = 0, negative_odd = 0;

    for (int i = 0; i < 25; i++) {
        if (Arr[i] < 0 && Arr[i] % 2 == 0) {
            negative_even += 1;
        }
        else if (Arr[i] > 0 && Arr[i] % 2 == 0) {
            positive_even += 1;
        }
        else if (Arr[i] < 0 && Arr[i] % 2 != 0) {
            negative_odd += 1;
        }
        else if (Arr[i] > 0 && Arr[i] % 2 != 0) {
            positive_odd += 1;
        }
    }

    // Return an array with all the counts
    return {positive_even, positive_odd, negative_even, negative_odd};
}

int main() {
    std::array<int, 25> arra = {34, 5, 65, 67, 56, 7, 8, 69, 8, 8, 7, 7, -24, -13, -6, -8, -25, 90, 45, -2, -33, 14, 21, 10, -50};

    // Get the array
    std::array<int, 4> result = return_evenodd(arra);

    // Output the results
    std::cout << "Positive Even: " << result[0] << "\n";
    std::cout << "Positive Odd: " << result[1] << "\n";
    std::cout << "Negative Even: " << result[2] << "\n";
    std::cout << "Negative Odd: " << result[3] << "\n";

    return 0;
}




void return_evenodd(const std::array<int, 25>& Arr, int& positive_even, int& positive_odd, int& negative_even, int& negative_odd) {
    positive_even = positive_odd = negative_even = negative_odd = 0;

    for (int i = 0; i < 25; i++) {
        if (Arr[i] < 0 && Arr[i] % 2 == 0) {
            negative_even += 1;
        }
        else if (Arr[i] > 0 && Arr[i] % 2 == 0) {
            positive_even += 1;
        }
        else if (Arr[i] < 0 && Arr[i] % 2 != 0) {
            negative_odd += 1;
        }
        else if (Arr[i] > 0 && Arr[i] % 2 != 0) {
            positive_odd += 1;
        }
    }
}

int main() {
    std::array<int, 25> arra = {34, 5, 65, 67, 56, 7, 8, 69, 8, 8, 7, 7, -24, -13, -6, -8, -25, 90, 45, -2, -33, 14, 21, 10, -50};

    int pos_even, pos_odd, neg_even, neg_odd;
    return_evenodd(arra, pos_even, pos_odd, neg_even, neg_odd);

    // Output the results
    std::cout << "Positive Even: " << pos_even << "\n";
    std::cout << "Positive Odd: " << pos_odd << "\n";
    std::cout << "Negative Even: " << neg_even << "\n";
    std::cout << "Negative Odd: " << neg_odd << "\n";

    return 0;
}
