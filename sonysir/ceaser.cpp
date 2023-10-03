#include <iostream>

using namespace std;
string ceaserCypher(string str,int key) {
    string result="";
    for(int i=0;i<str.length();++i) {
        result+=char(str[i]+key);
    }
    return result;
}
int main() {
    string str = "xyz";
    int key=2;
    string result = ceaserCypher(str,key);
    cout<<result;
    return 0;
}