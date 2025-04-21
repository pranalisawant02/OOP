
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v={2,4,1,7,9,5};
	sort(v.begin(),v.end());
	int i;
	for(i=0;i<v.size();i++)
	{
	cout<<v[i]<<" ";
	}
}
