#include <iostream>
using namespace std;

int main() {
    int n,t,start=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
       for(int i=0;i<n;i++)
       {
         if(a[i]>0)
         a[start++]=a[i];
        }
       while(start<n)
       {
        a[start]=0;
       }
     for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
     cout<<endl;
    }
    
    
	return 0;
}
