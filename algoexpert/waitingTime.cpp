

using namespace std;

int minimumWaitingTime(vector<int> queries)
{
    std::sort(queries.begin(), queries.end());
    int sum = 0;
    for (int n : queries)
    {
        cout << n << " ";
    }
    cout << endl;
    for (unsigned int i = 0; i < queries.size() - 1; ++i)
    {
       
        sum += queries.at(i) * (queries.size() - 1 - i);
      
    }

    cout << "sum" << sum << endl;
    
    return sum;
}