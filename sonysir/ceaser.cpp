#include <iostream>

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


int main() {
    string str = "AAAAAAAAAAAAAaaaAAAAaaaBBBCCCDDDD";
    int key=2;
    // string result = ceaserCypher(str,key);
    string result=runLengthEncoding(str);
    cout<<result;
    return 0;
}