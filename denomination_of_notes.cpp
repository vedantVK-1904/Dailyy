//Program to calculate the no. of notes are required to make up for the entered number
#include<iostream>

void denomination_of_notes(int bundle_of_notes){

    std::cout<<"No. of Rs100 notes: "<<(bundle_of_notes / 100)<<'\n';
    bundle_of_notes = bundle_of_notes % 100;

    std::cout<<"No. of Rs50 notes: "<<(bundle_of_notes / 50)<<'\n';
    bundle_of_notes = bundle_of_notes % 50;

    std::cout<<"No. of Rs10 notes: "<<(bundle_of_notes / 10)<<'\n';
    bundle_of_notes = bundle_of_notes % 10;

    std::cout<<"No. of Rs5 notes: "<<(bundle_of_notes / 5)<<'\n';
    bundle_of_notes = bundle_of_notes % 5;

    std::cout<<"No. of Rs2 notes: "<<(bundle_of_notes / 2)<<'\n';
    bundle_of_notes = bundle_of_notes % 2;

    std::cout<<"No. of Rs1 notes: "<<(bundle_of_notes / 1) <<'\n';

}

int main(){
    int number_of_notes;
    std::cout<<"Enter the amount"; 
    std::cin>>number_of_notes;
    denomination_of_notes(number_of_notes);
}