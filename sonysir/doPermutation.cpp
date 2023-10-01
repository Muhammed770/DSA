#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers={1,8,9};
    std::sort(numbers.begin(),numbers.end());
    int count=0;
    do {
        for(int el:numbers) {
            std::cout<<el<<" ";
        }
        std::cout<<std::endl;
        count++;
    }while(std::next_permutation(numbers.begin(),numbers.end()));    
    std::cout<<"total permutations = "<<count;
    return 0;

}
