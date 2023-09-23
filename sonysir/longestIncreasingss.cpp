#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::vector<int> longestIncreasingSubString(const std::vector<int>& array) {
    if(array.empty()) {
        return std::vector<int>();
    }
    std::vector<int> result;
    int n=array.size();
    std::vector<int> lis(n,1);

    for( int i=1;i<n;++i) {
        for( int j=0;j<i;++j) {
            if(array[i]>array[j] && lis[i] < lis[j]+1) {
                lis[i] = lis[j]+1;
            }
        }
    }
    std::cout << std::endl;
    for (int n : lis)
    {
        std::cout << n;
    }
    std::cout << std::endl;
    int maxVal = *std::max_element(lis.begin(),lis.end());
    for(int i=n-1;i>=0;i--) {
        if(lis[i]==maxVal) {
            // result.insert(result.begin(),array[i]);
            result.push_back(array[i]);
            maxVal--;
        }
    }
    std::reverse(result.begin(),result.end());
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin,input);
    std::istringstream iss(input);
    std::vector<int> numbers;
    int number;
    while(iss >> number) {
        numbers.push_back(number);
        std::cout<<number;
    }

    std::vector<int> result1 = longestIncreasingSubString(numbers);
    std::cout << "longestIncreasingSubString:"<<std::endl;
        for (int n : result1)
    {
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
    return 0;
}