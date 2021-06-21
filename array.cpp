#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int a[20];
	vector<int> v;
	//vector<vector<int>>
	int t=3;
	v.push_back(t);
	v.push_back(t);
	cout<<sizeof(v)<<endl;
	cout<<v.at(1)<<endl;
	v.pop_back();
	cout<<v.at(0)<<endl;
	a[2]=3;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	cout<<a[4]<<endl;
	//cout<<a.size()<<endl;
	return 0;
}
