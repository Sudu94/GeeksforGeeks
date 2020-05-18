#include <iostream>
using namespace std;

int main() 
{
       int n,temp,k.p;
	cin>>p;
	while(p--)
	{
	    cin>>n>>k;
            int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    temp=a[k-1];
            a[k-1]=a[n-k];
            a[n-k]=temp;
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            
	  }
	
	
	return 0;
}
