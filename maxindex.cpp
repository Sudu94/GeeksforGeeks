#include <iostream>
using namespace std;

int main() {
	int t,n,max,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    max=-1;
	    for(i=0;i<n;i++)
	    {
              
	        for(j=n-1;j>0;j--)
	        {
	           
	           if(a[j]>a[i] && max<(j-i))
	           {
	               max=j-i;
	           }
	        }
	    }
            if(n==1)
            cout<<"0"<<endl;
            else
	    cout<<max<<endl;
         
	}
	return 0;
}
