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
	int a[n],rptd[n],count=0,f=0;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	rptd[i]=0;
	}
	for(int i=0;i<n;i++)
	{	
	 for(int j=i+1;j<n;j++)
	    if((a[i]==a[j])&&(a[j]!=0))
	     {
		  a[j]=0;
		  ++count;
	     }
	 if(count>0)
	  rptd[a[i]-1]=a[i]; 
	 count=0;
	}
	for(int i=0;i<n;i++)
	   if(rptd[i]!=0)
	   {
	     cout<<rptd[i]<<' ';
	     ++f;
	   }
	if(!f) cout<<"unique";
	return 0;
}
