#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n) {
    // Create a boolean array "isPrime[0..n]" and initialize
    // all entries as true. A value in isPrime[i] will
    // be false if i is not a prime, true if i is a prime.
    vector<bool> isPrime(n+1, true);
    
    // Mark 0 and 1 as non-prime
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        // If isPrime[p] is still true, then p is a prime
        if (isPrime[p]) {
            // Mark all multiples of p starting from p^2 as false
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    // Print all prime numbers
    cout << "Prime numbers up to " << n << ": ";
    for (int p = 2; p <= n; p++) {
        if (isPrime[p])
            cout << p << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    sieveOfEratosthenes(n);
    return 0;
}
