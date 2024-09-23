#include<iostream>
#include<string>
#include<cmath>

int sum_of_digits_of_5_digit_number(int n){
    int num = n / 10000;
     n = n % 10000;
    int num1 = n / 1000;
     n = n % 1000;
    int num2 = n / 100;
     n = n % 100;
    int num3 = n / 10;
     n = n % 10;

    int sum = (num + num1 + num2 + num3 + n);
    return sum;
}


int sum_of_digits_of_n_digit_number(int n) {
    int sum = 0;

    // Continue extracting each digit and summing
    while (n > 0) {
        sum += n % 10;  // Get the last digit
        n /= 10;        // Remove the last digit from the number
    }

    return sum;
}

//RECURSION

int sum_of_five(int num) {
    if (num == 0) {
        return 0;  // Base case: stop when num is 0
    }

    int last_digit = num % 10;  // Get the last digit
    num = num / 10;  // Remove the last digit

    return last_digit + sum_of_five(num);  // Recursive call with the remaining number
}


int main(){

    std::cout<<"Result "<<sum_of_digits_of_n_digit_number(12345);

    return 0;
}
