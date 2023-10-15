#include <vector>
#include <iostream>

using namespace std;

void dispArray(vector<int> array) {
    
    cout<<endl;
    for(int =0;i< array.size();++i) {
        cout<<array[i];
    }
    cout<<endl;
} 

void dispMatrix(vector<vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    cout<<endl;
    for(int i=0;i<m;++i) {
        for(int j=0;j<n;++j) {
            cout<<matrix[i][j];
        }
    }
    cout<<endl;
}
void getTransPose(vector<vector<int>> array) {
    int m = array.size();
    int n = array[0].size();
    vector<vector<int>> transpose(n , vector<int>(m,0));
    for(int i=0;i<m;++i) {
        for(int j=0;j<n;++j) {
            transpose[j][i] = array[i][j];
        }
    }
    array = transpose;
}
 
vector<int> spiralTraverse(vector<vector<int>> array)
{
    int m = array.size();
    int n = array[0].size();
    vector<int> result(m * n);
    while(array.size() > 0) {
        result.push_back(array[0]);
        dispArray(result);
        array.erase(array.begin());
        dispMatrix(array);
        getTransPose(array);
        dispMatrix(array);
    }
    return result;
}
