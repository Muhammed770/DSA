#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights)
{

    for (unsigned int i = 0; i < redShirtHeights.size(); ++i)
    {
        if (redShirtHeights.at(i) >= blueShirtHeights.at(i) && redShirtHeights.at(0) <= blueShirtHeights.at(0))
        {
            return false;
        }
        else if (redShirtHeights.at(i) <= blueShirtHeights.at(i) && redShirtHeights.at(0) >= blueShirtHeights.at(0))
        {
            return false;
        }
    }

    return true;
}
