//Convert this program to C++
//change to C++ io
//change to one line comments
//change defines of constants to const
//change array to vector<>
//inline any short function

#include <iostream>
#include <vector>
using namespace std;

const int N = 40;

template <class summable>
inline void sum(summable& p, summable n, vector<summable> d)
{
    p = 0;
    for(int i = 0; i < n; ++i)
        p = p + d[i];
        //type summable must be able to add
}

int main()
{
    int accum = 0;
    vector<int> data;
    for(int i = 0; i < N; ++i)
        data.push_back(i);
    sum(accum, N, data);
    cout<<"sum is "<<accum<<endl;
    return 0;
}
