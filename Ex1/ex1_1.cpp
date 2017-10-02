// Convert this program to C++
// Change to C++ io
// Changed defines of constants to const
// Change array to vector<>
// inline any short fucntion

#include <iostream>
#include <vector>

using namespace std;
const int N = 40;

//C++ is call by refernece
inline void sum(int& p,int n, vector<int> d)
{
	for (int i = 0; i < n; ++i)
		p += d[i];
	
}

int main()
{
	int accum=0;
	vector<int> data(N);

	for (int i = 0; i < N; ++i)
		data[i] = i;
	//signature matching algorithm
	sum(accum, N, data);

	cout << "sum is " << accum << endl;
	return 0;
}
