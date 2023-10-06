#include <iostream>

using namespace std;

bool isMonotonic(vector<int> array)
{
    int n = array.size();
    int arrayNature = array[0] - array[n - 1];
    if (arrayNature == 0) {
        return false;
    }
    return false;
}
