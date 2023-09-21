#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
int main() {
    cout<<"helloo"<<"\n" ;
    std::vector<int> myVector = {1,4,5,6,3,2,345,667,78};
    
    cout<<"vector: \n";

    vector<int>::iterator it = myVector.begin();
    int firstElement = *it;

    for(unsigned int i=0;i<myVector.size();++i) {
        cout << myVector[i] << "-> ";
    }
    myVector.insert(myVector.begin() + 2, 11);
    cout<<"vector: \n";
    for (unsigned int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i]<<"-> ";
    }
    myVector.erase(myVector.begin() + 2);
    cout << "vector: \n";
    for (unsigned int i = 0; i < myVector.size(); ++i)
    {
        cout << myVector[i] << "-> ";
    }
    std::vector<int>::iterator itend = myVector.end();
    std::cout<<"itend :"<<*itend;
    return 0;
}





