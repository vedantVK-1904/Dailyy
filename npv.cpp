//  A machine is purchased which will produce the earning of 1000 per annum while it lasts.
// Machine costs 6000 and will have salvage value of 2000 when it is condemned .
// If 9% of per annum can be earned on alternate investments,
//write a program which determines what will be the minimum shelf life of the machine
//to make it more attractive option.

//NPV = (R1 / (1 + r)^1) + (R2 / (1 + r)^2) + (R3 / (1 + r)^3) + ... + (Rn / (1 + r)^n) + (S / (1 + r)^n) - C
// R1, R2, ..., Rn are the cash inflows (earnings) in years 1, 2, ..., n.
// r is the discount rate (annual interest rate or the rate of return from alternative investments).
// n is the number of years (shelf life).
// S is the salvage value at the end of the machine's life (year n).
// C is the initial cost of the machine.

#include <iostream>
#include <cmath> 

// Function to calculate NPV for a given shelf life
double calculate_NPV(int life_years, double cost, double salvage_value, double earnings_per_year, double discount_rate) {
    double npv = 0.0;
    
    // Calculate the present value of annual earnings for each year
    for (int year = 1; year <= life_years; ++year) {
        npv += earnings_per_year / pow(1 + discount_rate, year);
    }
    
    // Add the present value of the salvage value in the last year
    npv += salvage_value / pow(1 + discount_rate, life_years);
    
    // Subtract the initial cost of the machine
    npv -= cost;
    
    return npv;
}

// Function to find the minimum shelf life that makes NPV positive
int find_minimum_shelf_life(double cost, double salvage_value, double earnings_per_year, double discount_rate) {
    int shelf_life = 1;
    
    // Keep increasing the shelf life until the NPV becomes positive
    while (true) {
        double npv = calculate_NPV(shelf_life, cost, salvage_value, earnings_per_year, discount_rate);
        
        // If NPV is positive, return the current shelf life
        if (npv > 0) {
            return shelf_life;
        }
        
        ++shelf_life;
    }
}

int main() {
    // Parameters
    double cost = 6000;
    double salvage_value = 2000;
    double earnings_per_year = 1000;
    double discount_rate = 0.09; // 9% per annum

    // Find the minimum shelf life where the machine becomes an attractive option
    int min_shelf_life = find_minimum_shelf_life(cost, salvage_value, earnings_per_year, discount_rate);
    
    // Output the result
    std::cout << "The minimum shelf life of the machine to make it an attractive option is " 
              << min_shelf_life << " years." << std::endl;
    
    return 0;
}
