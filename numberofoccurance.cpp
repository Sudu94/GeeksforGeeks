#include<iostream>
using namespace std;
int a[1000];
int main()
{
  int n,p,count,s,t;
  cin>>s;
  while(s--)
  {
  cin>>n>>p;
  for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
  count=0;
   for(int i=0;i<n;i++)
    {
     if(a[i]==p)
       count++;
      
    
   }
 
    if(count==0)
      cout<<"-1 "<<endl;
    else
    cout<<count<<endl;
  }
  return 0;
}
