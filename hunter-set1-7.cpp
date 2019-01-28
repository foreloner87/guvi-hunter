#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(i<n)
		if(a[i]%2!=0)
		cout<<a[i]<<' ';
		if(i+1<n)
		if(a[i+1]%2==0)
		cout<<a[i+1];
		i+=1;
	}
	return 0;
}
