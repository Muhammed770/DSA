#include <vector>
#include <climits>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo)
{

    vector<int> mergedVector(arrayOne.size() + arrayTwo.size());
    merge(arrayOne.begin(), arrayOne.end(), arrayTwo.begin(), arrayTwo.end(), mergedVector.begin());

    sort(arrayOne.begin(), arrayOne.end());
    sort(arrayTwo.begin(), arrayTwo.end());
    sort(mergedVector.begin(), mergedVector.end());
    for (int number : arrayOne)
    {
        cout << number << " ";
    }
    cout << endl;
    for (int number : arrayTwo)
    {
        cout << number << " ";
    }
    cout << endl;
    for (int number : mergedVector)
    {
        cout << number << " ";
    }
    int smallest = INT_MAX;
    vector<int> numPair;
    for (int i = 0; i < mergedVector.size(); ++i)
    {
        int absDiff = abs(mergedVector[i] - mergedVector[i + 1]);
        if (absDiff < smallest)
        {
            if ((binary_search(arrayOne.begin(), arrayOne.end(), mergedVector[i]) && binary_search(arrayTwo.begin(), arrayTwo.end(), mergedVector[i + 1])) || (binary_search(arrayOne.begin(), arrayOne.end(), mergedVector[i + 1]) && binary_search(arrayTwo.begin(), arrayTwo.end(), mergedVector[i])))
            {
                if (binary_search(arrayOne.begin(), arrayOne.end(), mergedVector[i]))
                {
                    numPair = {mergedVector[i], mergedVector[i + 1]};
                }
                else
                {
                    numPair = {mergedVector[i + 1], mergedVector[i]};
                }
                smallest = absDiff;
            }
        }
    }
    return numPair;
}
