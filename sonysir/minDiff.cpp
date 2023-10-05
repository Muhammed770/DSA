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

#include <vector>
#include <climits>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo)
{
    sort(arrayOne.begin(), arrayOne.end());
    sort(arrayTwo.begin(), arrayTwo.end());
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

    int start1 = 0;
    int start2 = 0;

    int size1 = arrayOne.size();
    int size2 = arrayTwo.size();
    vector<int> result(2, 0);
    int minDiff = INT_MAX;
    int count = 0;
    while (start1 < size1 && start2 < size2)
    {
        int currDiff = abs(arrayOne[start1] - arrayTwo[start2]);
        if (currDiff < minDiff)
        {
            minDiff = currDiff;
            result[0] = arrayOne[start1];
            result[1] = arrayTwo[start2];
        }
        if (arrayOne[start1] < arrayTwo[start2])
        {
            start1++;
        }
        else
        {
            start2++;
        }
        count++;
    }
    for (int number : result)
    {
        cout << number << " ";
    }
    cout << endl;
    cout << "count : " << count;
    return result;
}
