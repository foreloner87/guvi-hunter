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
	int a[n],f=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
	for(int j=i+1;j<n;j++)
	if((a[i]==a[j])&&(a[j]!=0))
	{
		a[j]=0;
		++f;
	}
	if((f>0))
		a[i]=0;
	f=0;
	}
	for(int i=0;i<n;i++)
	if(a[i])
	cout<<a[i];
	return 0;
}
