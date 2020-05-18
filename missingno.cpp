#include <iostream>
using namespace std;

int main() {
    int n,p,s,sum,ans;
    cin>>p;
    while(p--)
    {
    cin>>n;
    long int a[n];
    for(int i=0;i<n-1;i++)
    {
      cin>>a[i];  
    }
     s=n*(n+1)/2;
     sum=0;
     for(int i=0;i<n-1;i++)
     {
       sum=sum+a[i];
       
     }
     cout<<s-sum<<endl;
    }
	return 0;
}
