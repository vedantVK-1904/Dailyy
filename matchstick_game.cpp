#include<iostream>
#include <cstdlib>
#include <ctime>

void matchsticks(){

    int total_sticks = 21;
    srand(time(0));  // Seeding the random number generator
    int user_match, comp_match;

    while (total_sticks != 0){

        std::cout << "\nEnter the number of matchsticks (1 to 4):\n";
        std::cin >> user_match;

        // Corrected condition to check if user_match is between 1 and 4
        if (user_match >= 1 && user_match <= 4){
            total_sticks = total_sticks - user_match;

            if (total_sticks == 0){
                std::cout << "You Won";
                exit(0);  // User won the game, exit the program
            }

            comp_match = (rand() % 4) + 1;  // Generate a number between 1 and 4
            std::cout << "Computer chose: " << comp_match << "\n";
            total_sticks = total_sticks - comp_match;

            //std::cout << "Remaining sticks: " << total_sticks << "\n";

            if(total_sticks == 0){
                std::cout << "\nComputer Won";
                exit(0);  // Computer won the game, exit the program
            }

            if (total_sticks < 0){
                total_sticks = (rand() % 21) + 1;  // Fixing negative total sticks
                std::cout << "\nSticks Count SET\n";
            }
        } 
        else{
            std::cout << "I just told you to enter a number between 1 to 4!";
        }
    }
}

int main(){
    matchsticks();
    return 0;
}
