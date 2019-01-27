#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	if(!n)
	{
	cout<<"Invalid input"<<endl;
	return 0;
	}
	int a[n],t=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(int i=n-1;i>=0;i--)
	cout<<a[i];
	return 0;
}
