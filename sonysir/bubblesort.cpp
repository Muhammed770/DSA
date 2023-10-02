#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array)
{
    for (int i = 0; i < array.size(); ++i)
    {
        for (int j = 0; j < array.size() - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                int temp = aray[j];
                array[j] = array[j + 1];
            }
        }
    }
    return {};
}
