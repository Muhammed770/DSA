#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>

bool hasRepeatingChars(const std::string& word) {
    std::unordered_set<char> characters;
    for(char c: word) {
        if(characters.count(c) > 0) {
            return true;
        }
        characters.insert(c);
    }
    return false;
}

int main() {
    std::string inputSentence;
    std::cout<<"enter the sentence: ";
    std::getline(std::cin,inputSentence);
    std::istringstream iss(inputSentence);
    // std::vector<std::string> words;
    std::string word,longestWord="";
    while(iss >> word) {
        if(!hasRepeatingChars(word) && word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    std::cout<<"longest word :"<<longestWord;
    return 0;
}