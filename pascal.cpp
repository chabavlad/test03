#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<vector<int> > v(7);
    v[0].push_back(1);
    v[1]=v[0]; v[1].push_back(1);
    for (int i=2; i<v.size(); ++i)
    {
      v[i]=v[i-1];
      v[i].push_back(1);
      for (int g=0, j=1; (g<v[i-1].size()-1)& (j<v[i].size()); ++g,++j)
          v[i][j]+=v[i-1][g];

    }

    for(int i=0;i<v.size();++i)
    {
      for (int j=0; j<v[i].size();++j)
         cout << v[i][j] << ' ';
      cout << endl;
    }
    return 0;
}

