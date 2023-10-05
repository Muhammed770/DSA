#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum)
{
    vector<vector<int>> result;
    std::sort(array.begin(), array.end());
    for (int i = 0; i < array.size(); ++i)
    {
        int lower = i + 1;
        int upper = array.size() - 1;
        while (lower < upper)
        {
            int currentSum = array[i]+array[lower]+array[upper];
            if (targetSum - array[i] == array[lower] + array[upper])
            {
                vector<int> triplets = {array[i], array[lower], array[upper]};
                sort(triplets.begin(), triplets.end());
                result.push_back(triplets);
                lower++;
                upper--;
            }
            else if (targetSum - array[i] < array[lower] + array[upper])
            {
                upper--;
            }
            else if (targetSum - array[i] > array[lower] + array[upper])
            {
                lower++;
            }
        }
    }
    for (int num : array)
    {
        cout << num << " ";
    }

    cout << endl
         << targetSum;
    return result;
}
