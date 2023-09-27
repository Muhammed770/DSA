#include<iostream>
#include<sstream>
#include<vector>

std::string formatWord(std::string& word) {

    std::string result = word;

    for(int i=1 ;i<word.length();++i ) {
        if(word[i-1] == word[i]) {
            result[i-1] ='*';
            result[i] = '*';
        }
    }
    return result;
}

int main() {
    std::string inputString;
    std::getline(std::cin,inputString);
    std::istringstream iss(inputString);
    std::string word;
    std::vector<std::string> sentence;
    while(iss >> word){
        std::string result = formatWord(word);
        sentence.push_back(result);
    }
    for(unsigned int i=0;i< sentence.size();++i) {
        std::cout<<sentence.at(i)<<" ";
    }

    kjh3ke
    
}