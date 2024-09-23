//prime upto 300

#include <iostream>
#include <cmath>  // For sqrt() function

void prime_numbers() {
    int j = 2;
    while (j < 301) {

        // Flag method

// bool is_prime = true;
//         for (int i = 2; i <= j / 2; i++) {  // Loop only to half of j
//             if (j % i == 0) {
//                 is_prime = false;
//                 break;
//             }
//         }
//         if (is_prime) {
//             std::cout << "Prime: " << j << "\n";
//         }
         
        int i,k= sqrt(j);
        for (i = 2; i <= k; i++) {  // Loop from 2 to sqrt(j)
            if (j % i == 0) {  // If j is divisible by i, it's not prime
                break;
            }
        }
        //If we completed the loop without finding a divisor, j is prime
        if (i > k) {
            std::cout << "Prime: " << j << "\n";
        }
        // if (i == j) {
        //     std::cout << "Prime: " << j << "\n";
        // } why isn't it working?
        j++;
    }
}

int main() {
    prime_numbers();
    return 0;
}
