#include <iostream>
using namespace std;

int main() {
	int t,n,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    count=0;
	    for(int i=n-1;i>0;i--)
	    {
	        if(a[i]>=0)
	        count++;
	        else
	        break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
