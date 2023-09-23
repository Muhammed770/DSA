#include <vector>
using namespace std;

int tandemBicycle(
    vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds, bool fastest)
{
    sort(redShirtSpeeds.begin(), redShirtSpeeds.end());
    if (fastest)
    {
        sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end(), greater<int>());
    }
    else
    {
        sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());
    }
    cout << "red : ";
    for (int n : redShirtSpeeds)
    {
        cout << n;
    }
    cout << endl;
    cout << "blue : ";
    for (int n : blueShirtSpeeds)
    {
        cout << n;
    }
    cout << endl;
    int sum = 0;
    for (unsigned int i = 0; i < redShirtSpeeds.size(); ++i)
    {
        if (redShirtSpeeds.at(i) >= blueShirtSpeeds.at(i))
        {
            sum += redShirtSpeeds.at(i);
            cout << "fastest " << fastest << "red : " << redShirtSpeeds.at(i) << endl;
        }
        else if (redShirtSpeeds.at(i) < blueShirtSpeeds.at(i))
        {
            sum += blueShirtSpeeds.at(i);
            cout << "fastest " << fastest << "blue : " << blueShirtSpeeds.at(i) << endl;
        }
    }
    cout << "sum :" << sum;
    return sum;
}
