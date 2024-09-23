#include <iostream>
#include <cmath>

// int reverse_5_digit_number(int r) {
//     int n = 0;
//     int length = std::to_string(r).length();  // Calculate the number of digits
    
//     for (int i = 0; i < length; i++) {
//         n = n + (pow(10, (length - 1 - i))) * (r % 10);  // Add the last digit at the correct place
//         r = r / 10;  // Remove the last digit
//     }

//     return n;
// } we don't use the pow method as it represents floating point numbers and gives wrong output as we are dealing with integers

int main() {
    int number;
    std::cout << "Enter a 5-digit number: ";
    std::cin >> number;

    std::cout << "Reversed Number: " << reverse_number(number) << std::endl;
    
    return 0;
}

int reverse_number(int r) {
    int n = 0;
    
    // Continue reversing until r becomes 0
    while (r > 0) {
        n = n * 10 + (r % 10);  // Add the last digit of r to n
        r = r / 10;             // Remove the last digit of r
    }

    return n;
}