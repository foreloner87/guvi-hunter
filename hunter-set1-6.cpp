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
	int a[n],f=0,s=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)	
	for(int j=i+1;j<n;j++)
	if(a[i]==a[j])
	{
		if(s==0) s=j;
		else if(s<=j) s=s;
		else if(s>j) s=j;
		++f;
	}
	if(!f) cout<<"unique";
	else cout<<a[s];
	return 0;
}
