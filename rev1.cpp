#include <iostream>
using namespace std;

int main() {
	int a[100],n,b,start=0,end,c;
           cin>>n;
           while(n--)
           {
	    cin>>b;
	    for(int i=0;i<b;i++)
	    {
	        cin>>a[i];
	    }
	   end=b-1;
           while(start<end)
            {
             c=a[start];
             a[start]=a[end];
             a[end]=c;
             start++;
             end--;
              }
             
	  for(int i=0;i<b;i++)
           {
             cout<<a[i];
             }     
}
	
	
	return 0;
}
