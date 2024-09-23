#include<iostream>

int table(int n){
    for (int i = 1; i <= 10; i++){
        if (i == 10){
            std::cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
            break;
        }
        std::cout<<n<<" * "<<i<<"  = "<<n*i<<"\n";
    }
    
}

int main(){
    int n;
    std::cout<<"Enter a number for its table"<<"\n";
    std::cin>>n;
    table(n);

}