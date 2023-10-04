#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;
string ceaserCypher(string str,int key) {
    string result="";
    for(int i=0;i<str.length();++i) {
        cout << "(str[i] + key - 97)%26 + 97  " << (str[i] + key - 97) % 26 + 97 << endl;
        result += char((str[i] + key - 97)%26 + 97);
    }
    return result;
}

string runLengthEncoding(string str)
{
    string result = "";
    char currEl = str[0];
    int count=0;
    for(int i =0;i<str.length();++i) {
        if(str[i]==currEl && count<9) {
            count++;
        }else {
            result+= to_string(count)+currEl;
            currEl=str[i];
            count=1;
        }
    }
    result += to_string(count) + currEl;
    return result;
}

bool generateDocument(string characters, string document)
{
    unordered_multiset<char> chars(characters.begin(), characters.end());
    for(char ch:document) {
        if(chars.find(ch) != chars.end()) {
            // chars.erase(ch); //this rm all occurence
            chars.erase(chars.equal_range(ch).first); //removes only a single occurrence
        }else {
            return false;
        }
    }
    return true;
}

int firstNonRepeatingCharacter(string string)
{
    unordered_multiset<char> chars(string.begin(),string.end());
    for(char ch:string) {
        if(chars.count(ch) > 1) {
            chars.erase(ch);
        }
    }
    int index = 0;
    for(char ch:string) {
        index++;
        if(chars.find(ch) != chars.end()) {
            return index;
        }
    }
    return -1;
}

int firstNonRepeatingCharacter(string string)
{
    unordered_map<char,int> charCount;
    for(char ch:string) {
        charCount[ch]++;
    }
    for(int i=0;i<string.length();++i) {
        if(charCount[string[i]]== 1) {
            return i;
        }
    }
    return -1;
}


vector<vector<string>> semordnilap(vector<string> words)
{
    vector<vector<string>> result;
    for()
    return {};
}

int main() {
    string str = "AAAAAAAAAAAAAaaaAAAAaaaBBBCCCDDDD";
    int key=2;
    // string result = ceaserCypher(str,key);
    string result=runLengthEncoding(str);
    cout<<result;
    return 0;
}