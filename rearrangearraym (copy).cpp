#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t,start,end,index;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
            int b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
          
           start=0;
           end=n-1; 
           index=0; 
           while(start<=end)
           {
              b[index]=a[end];
              b[index+1]=a[start];
              index+=2;
              start++;
              end--;
             }
          for(int i=0;i<n;i++)
           cout<<b[i]<<" ";
          
          cout<<endl;
	}
	return 0;
}
