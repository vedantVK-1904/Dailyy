#include<iostream>
#include<cmath>

int fac_torial(int n){

    if (n > 0){
        if(n == 1 || n == 0){
        return 1;
    }
        else{
            return n * fac_torial(n - 1);
        }
    }
}

void prime_numbers(int j) {
        int i;
        for (i = 2; i <= sqrt(j); i++) {
            if (j % i == 0) {
                std::cout << "Not Prime and factor " <<i<<"\n\n";   
                break;
            }
        }
        if (i > sqrt(j)) {
            std::cout << "Prime " <<"\n\n";
        }
    }

void odd_or_even(int n){
    bool flag; 
    if(n % 2 == 0){
        flag = true;
    }
    else{
        flag = false;
    }

    if (flag){
        std::cout<<"Even";
    }
    else{
        std::cout<<"Odd";
    }
}

void switch_program(){
    while (true)
    {
        int choice;
        std::cout<<"Enter your choice\n";
        come_here : std::cout<<"1. Factorial of a number\n";
                    std::cout<<"2. Prime check\n";
                    std::cout<<"3. Odd or Even\n";
                    std::cout<<"4. Exit\n";
                    std::cin>>choice;

        switch (choice)
        {
        case 1:
            int num;
            std::cout<<"Enter number for factorial\n";
            std::cin>>num;
            std::cout<<"Factorial of number: "<<fac_torial(num)<<"\n\n";
            break;
        
        case 2:
            int num1;
            std::cout<<"Enter number for prime check\n";
            std::cin>>num1;
            std::cout<<"Prime check of number: ";
            prime_numbers(num1);"\n\n";
            break;

        case 3:
            int num2;
            std::cout<<"Enter number for  Even check\n";
            std::cin>>num2;
            odd_or_even(num2);"\n\n";
            break;

        case 4:
            std::cout<<"Bye, bye\n";
            exit(0);

        default:
            std::cout<<"Please enter number between 1 to 4"<<"\n\n";
            goto come_here;
        }
    }
    
}

int main(){
     switch_program();
}

