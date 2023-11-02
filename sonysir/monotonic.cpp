#include <iostream>

using namespace std;

bool isMonotonic(vector<int> array)
{
    int n = array.size();
    if (n <= 1)
    {
        return true;
    }
    // int arrayNature = array[0] - array[n - 1];
    int flag = 0;
    // if(array[0]<array[1]) {
    //   flag=1;
    // }else if(array[0]<array[1]) {
    //    flag=-1;
    // }
    for (int i = 1; i < n; ++i)
    {
        if (array[i - 1] < array[i])
        {
            if (flag == 0)
            {
                flag = 1;
            }
            else if (flag == -1)
            {
                return false;
            }
        }
        if (array[i - 1] > array[i])
        {
            if (flag == 0)
            {
                flag = -1;
            }
            else if (flag == 1)
            {
                return false;
            }
        }
    }
    //g


    return true;
}
