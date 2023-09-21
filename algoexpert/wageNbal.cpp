#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

int main() {
    std::string input;
    int n;
    std::getline(std::cin,input);
    std::cout<<"enter the array length: ";
    std::cin>>n;
    std::istringstream iss(input);
    std::vector<int> numbers;
    int number;
    // int count=1;
    while(iss >> number && numbers.size()<= n) {
        numbers.push_back(number);
        // count++;
    }
    int sum=0;
    for(int number: numbers) {
        sum+=number;
    }
    int result = n*(n+1)/2 - sum ;
    std::cout << "n" << n << "sum:" << sum << "((n*n+1)/2)" << ((n * (n + 1)) / 2);
    std::cout<<"missing number is :" <<result;
}
 