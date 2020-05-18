#include <iostream>
using namespace std;

int main() {
	int t,n,l;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int k;
	    for(int i=0;i<n;i++)
	    {
                k=0;
	        l=i;
	      for(int j=0;j<n;j++)
	      {
	         if(a[j]==l)
	         {
	           cout<<a[j]<<" ";
	           k=1;
	          }
                 
	       }
	      if(k==0)
              cout<<"-1"<<" ";
	    }
	    cout<<endl;
	   
	}
	return 0;
}
