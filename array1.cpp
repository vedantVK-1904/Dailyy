#include<iostream>

void searching_element(){
    int size,search;
    std::cout<<"Enter array size\n";
    std::cin>>size;
    int array[size];
    for(int i = 0; i < size; i++){
        std::cout<<"\nEnter array elements\n";
        std::cin>>array[i];
    }
    std::cout<<"Enter number to be searched\n";
    std::cin>>search;
    for (int i = 0; i <= size; i++){
        if (search == array[i]){
            std::cout<<"Found "<<search;
        }
        else{
            std::cout<<"Not Found ";
            break;
        }
        
    }
    }



int main(){
    
    searching_element();
    return 0;
}

