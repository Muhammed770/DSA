#include <cstdio>
#include <iostream>
#include <array>
#include <sstream>
#include <algorithm>

int main() {
    std::array<int,5> arr = {5,3,2,1,3};
    // std::string input = "1 2 3 4 5 6 7";
    std::string input;
    std::getline(std::cin,input);
    std::cout<<"your input :"<<input;
    std::istringstream iss(input);
    int number;
    std::vector<int> numbers;

    while(iss >> number) {
        numbers.push_back(number);
    }
    int sum = 0;
    for(int n:numbers) {
        sum +=n;
    }
    std::cout<<"sum: "<<sum;
    //
    return 0;
}