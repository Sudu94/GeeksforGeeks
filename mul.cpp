#include <iostream>
using namespace std;

int main() {
	int n,t,mul;
        cin>>t;
	while(t--)
	{
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
            mul=1;
	    for(int i=0;i<n;i++)
	    {
	       mul=mul*a[i]; 
	    }
	    cout<<mul<<endl;
	}
	return 0;
}
