#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	if(!n)
	{
	cout<<"Invalid input";
	return 0;
	}
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]+a[j]==0)
	cout<<a[i]<<' '<<a[j];
	return 0;
}
