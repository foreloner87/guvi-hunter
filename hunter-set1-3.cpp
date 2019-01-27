#include<iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n],s[n],h=0,j=0;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]==i)
	{
	s[j]=i;
	h=++j;
	}}
	if(h==0)
	cout<<-1;
	else
	for(int i=0;i<h;i++)
	cout<<s[i]<<' ';
	return 0;
}
