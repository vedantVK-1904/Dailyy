#include <iostream>
#include<array>

void max_min_count(std::array<int,8>& Array, int& Min, int& Max){

    for(int i = 0; i < Array.size(); i++){
        for (int j = i + 1; j < Array.size(); j++){

            if (Array[i] > Array[j]){
                int temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
    Min = Array[0]; Max = Array[Array.size() - 1];
}



int main(){
int min = 0, max = 0;     
std::array<int,8> input_array = {54,87,55,24,50,65,23,65};
max_min_count(input_array, min, max);

std::cout << min << "\t" << max; 
    return 0;
}