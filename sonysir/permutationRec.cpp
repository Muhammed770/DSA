#include <vector>
using namespace std;
void permutationHelper(vector<vector<int>> &ans,vector<int> array, vector<int> ds, int[] elements)
{
}
vector<vector<int>> getPermutations(vector<int> array)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int elements[array.size()] = {0};
    permutationHelper(ans,array,ds,elements);
    return {};
}
