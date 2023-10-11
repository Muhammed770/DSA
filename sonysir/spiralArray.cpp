#include <vector>
using namespace std;

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
        array.erase()
        getTransPose(array);
        
    }
    return {};
}
