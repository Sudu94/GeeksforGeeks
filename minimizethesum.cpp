#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  long int sum,n,loc,t;
  cin>>t;
  while(t--)
  {
    cin>>n;
  long int a[n];
  long int b[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n,greater<>());
   
    for(int i=0;i<n;i++)
      cin>>b[i];
      sort(b,b+n);
   
    for(int i=0;i<n;i++)
    {
     loc=a[i]*b[i];
       sum=sum+loc;
     }
 cout<<sum<<endl;
   }
  return 0;
}
