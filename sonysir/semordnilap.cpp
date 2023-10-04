#include <vector>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

using namespace std;

vector<vector<string>> semordnilap(vector<string> words)
{
    vector<vector<string>> result;
    int count = 0;
    int i = 0;
    for (string word : words)
    {
        string tempString = word;
        reverse(word.begin(), word.end());
        for (int j = i + 1; j < words.size(); ++j)
        {
            if (words[j] == word)
            {
                vector<string> pair = {words[j], tempString};
                result.push_back(pair);
            }
        }
        i++;
    }
    return result;
}

int main()
{
    string inputString;
    getline(cin,inputString);
    istringstream iss(inputString);
    string word;
    vector<string> strinds;
    while (iss >> word)
    {
        strings.push_back(word);
    }
    // string str = "AAAAAAAAAAAAAaaaAAAAaaaBBBCCCDDDD";
    int key = 2;
    // string result = ceaserCypher(str,key);
    // string result = runLengthEncoding(str);
    // cout << result;
    return 0;
}