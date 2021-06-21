#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int a[20];
	int i,n;
	cout<<"enter no=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter value "<<i+1<<"=";
		cin>>a[i];	
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	return 0;
}
