#include<iostream>
#include <cmath>

void prime_numbers(int j) {
    int i;
    bool isPrime = true;  // Assume the number is prime
    int limit = sqrt(j);  // Calculate square root once

    for (i = 2; i <= limit; i++) {
        if (j % i == 0) {
            std::cout << "Not Prime and factor " << i << "\n\n";
            isPrime = false;  // If a factor is found, set isPrime to false
            break;            // No need to check further, exit the loop
        }
    }

    if (isPrime) {
        std::cout << "Prime\n\n";
    }
}

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Recursive function to find and print prime factors
void primeFactors(int n, int divisor = 2) {
    // Base case: if the number becomes 1, stop recursion
    if (n == 1) return;

    // If divisor is a factor of n, print it and recurse with reduced n
    if (n % divisor == 0) {
        cout << divisor << " ";
        primeFactors(n / divisor, divisor);
    } else {
        // If not divisible, move to the next divisor
        primeFactors(n, divisor + 1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factors of " << n << " are: ";
    primeFactors(n);
    cout << endl;

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    prime_numbers(num);

    return 0;
}
