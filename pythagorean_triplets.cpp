#include<iostream>

void pythagorean_triplets(){
    for (int i = 1; i <= 50; i++){
        for (int j = 1; j <= 50; j++){
            for (int k = 1; k <= 500; k++){
                if ((i*i) + (j*j) == (k*k)){
                    std::cout<<(i)<<" + "<<(j)<<" = "<<(k)<<"\n";
                }
            }
        }
    }
}

int main(){
    pythagorean_triplets();
    return 0;
}