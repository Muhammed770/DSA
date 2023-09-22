

using namespace std;

int minimumWaitingTime(vector<int> queries)
{
    std::sort(queries.begin(),queries.end());
    int sum =0;
    for(int n: queries) {
      cout<< n <<" ";
    }
    cout<<endl;
    for(unsigned int i =0; i<queries.size() - 1;++i) {
      cout<<"queries.at(i)"<<queries.at(i)<<"queries.size() -1 -i"<<endl<<queries.size() -1 -i;
        sum += queries.at(i)* (queries.size() -1 -i );
      cout<<endl<<queries.at(i)* (queries.size() -1 -i);
      cout<<"sum"<<sum<< endl;
    }
  
    cout<<"sum" << sum << endl;
    // for(unsigned int i=0;i< queries.size();++i) {
    //     for (unsigned int j = queries.size() -1; j >=0 ; ++j) {
    //     }
    // }
    return sum;
}
