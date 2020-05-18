#include <iostream>
using namespace std;

int main() {
	int n,t,p,count,count1,a[100],b[100];
	
	   cin>>t;  
           while(t--)
           {
	    count=0;
	    count1=0;
            cin>>a[n];
            cin>>b[n];
             
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>b[i])
	        count++;
	        else
	        count1++;
	    }
	    cout<<count<<" "<<count1<<endl;
	 }
	return 0;
}
