#include<iostream>

int odd_or_even(int n){
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
    return 0;
}

int main(){
    odd_or_even(46);
    return 0;

}