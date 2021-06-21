#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main()
{
	int a[20][20];
	int i,n,j;
	cout<<"enter no=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"enter value "<<i+1<<j+1<<"=";
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
	
	return 0;
}
