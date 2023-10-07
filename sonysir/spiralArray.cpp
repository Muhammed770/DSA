#include <vector>
using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array)
{
    int m = array.size();
    int n = array[0].size();
    vector<int> result(m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n;++ j)
        {
            result.push_back(array[i][j]);
            
        }
    }
    return {};
}
