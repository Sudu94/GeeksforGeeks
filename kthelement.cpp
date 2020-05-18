#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n,t,k,s;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cin>>k;
	    sort(a,a+n);
	    s=1;
	    for(int i=0;i<n;i++)
	    {
	        
	        if(s==k)
	        cout<<a[i]<<endl;
	        s++;
	    }
	    
	}

	return 0;
}
