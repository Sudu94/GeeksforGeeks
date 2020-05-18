#include <iostream>
using namespace std;

int main() {
	int t,n,sum,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    count=0;
	    for(int i=0;i<n;i++)
	    {
	        sum=0;
	        for(int j=i+1;j<n;j++)
	        {
	            sum=a[i]+a[j];
	            if(sum%4==0)
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
