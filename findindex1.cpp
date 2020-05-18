#include<iostream>
using namespace std;
int main()
{
 int n,t,k,s,p;
 cin>>t;
 while(t--)
 {
  cin>>n;
  long int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cin>>k;
  for(int i=0;i<n;i++)
  {
    s=a[i];
     if(a[i]==k)
      {
       cout<<i;
       break;
        }
     
   }
   if(s!=k)
    cout<<"-1";

}
  return 0;
  }
