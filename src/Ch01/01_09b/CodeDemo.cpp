// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Hi There! Enter your name here nerd: " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you " << name << "." << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
