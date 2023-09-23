#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights)
{
    sort(redShirtHeights.begin(), redShirtHeights.end());
    sort(blueShirtHeights.begin(), blueShirtHeights.end());
    bool redTallest = true;
    bool blueTallest = true;
    for (unsigned int i = 0; i < redShirtHeights.size(); ++i)
    {
        if (redShirtHeights.at(i) <= blueShirtHeights.at(i))
        {
            redTallest = false;
        }
        else if (blueShirtHeights.at(i) <= redShirtHeights.at(i))
        {
            blueTallest = false;
        }
    }
    return blueTallest || redTallest;
}
