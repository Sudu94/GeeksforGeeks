#include<iostream>
using namespace std;

int main()
 {
	int a[10],n,p,s,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	cin>>p;
	for(int i=0;i<n;i++)
	{
	 
	    if(p==a[i])
	     s=i;
         }
         
      for(int j=n;j>=0;j--)
	{
	 
	    if(p==a[j])
	     c=j;
         }
       cout<<c<<" "<<s;
	
	return 0;
}
