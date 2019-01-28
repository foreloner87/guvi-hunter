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
	int a[n],i,j,k,cj=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	  for(k=j+1;k<n;k++)
	   if((a[i]+a[j]==a[k])&&(cj!=j))
	    {	
	     cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<endl;
	     cj=j;
	    }
	return 0;
}

