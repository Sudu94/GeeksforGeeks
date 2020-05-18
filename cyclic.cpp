#include<iostream>
using namespace std;
int main()
{
 int n,t,temp;
 cin>>t;
 while(t--)
 {
  cin>>n;
 long int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 temp=a[n-1];
 for(int i=n;i>=1;i--)
 {
   a[i]=a[i-1];
 }
a[0]=temp;
 for(int i=0;i<n;i++)
 cout<<a[i];
}
 return 0;
}
    
