#include <vector>
using namespace std;
void permutationHelper(vector<vector<int>> &ans,vector<int> array, vector<int> ds, vector<bool> used)
{
    if(ds.size()==array.size()) {
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<array.size();++i) {
        if(!used[i]) {
            used[i] =true;
            ds.push_back(array[i]);
            permutationHelper(ans,array,ds,used);
            ds.pop_back();
            used[i]=false;
        } 
    }
}
vector<vector<int>> getPermutations(vector<int> array)
{
    vector<vector<int>> ans;
    vector<int> ds;
    vector<bool> used(array.size(),false);
    permutationHelper(ans,array,ds,used);
    return ans;
}
