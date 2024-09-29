#include<iostream>

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

void seven_terms(){
    int i; 
    float sum = 0;
    for (i = 1; i <= 10; i++){
        int denominator = fac_torial(i);
        sum = sum + (static_cast<float>(i) / denominator);
    }
    std::cout<<sum;
}



int main(){
    seven_terms();
    return 0;
}