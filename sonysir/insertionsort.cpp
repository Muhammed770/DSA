#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> array)
{
    for (int i = 0;i<array.size();++i) {
        int j=i;
        while(j>0 && array[j]<array[j-1]) {
            int temp=array[j];
            array[j]=array[j-1];
            array[j-1] = temp;
        }
    }
    
    return array;
}
