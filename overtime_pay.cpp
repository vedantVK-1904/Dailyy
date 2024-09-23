#include<iostream>

int overtime_pay(int hours){

    if (hours>40 && hours > 0){

        int pay = 0;
        pay = pay + 12 * (hours - 40); 

        return pay;
    }

    else{
        return 0;
    }
    
}

void the_while_loop(int i){

    int num = 1;
    while (i >= 1){

        int input_pay;

        std::cout<<"Enter Working hours of worker "<<num<<'\t';
        std::cin>>input_pay;
        std::cout<<"Overtime Pay is Rs"<< overtime_pay(input_pay)<<" of worker "<<num<<"\n\n";

        i = i - 1;
        num = num + 1;
    } 
}

void to_call(){

    int i;

    std::cout<<"Enter Number of workers "<<'\t';
    std::cin>>i;

    the_while_loop(i);
}

int main(){
 to_call();

    return 0;
}