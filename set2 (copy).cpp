#include<iostream>
using namespace std;
int main()
{
  int n,p,a[100],end,loc,no;
  cin>>no;
  while(no--)
  {
  cin>>n>>p;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
   }
   end=p;
   for(int i=0;i<n;i++)
    {
     loc=i;
     if(loc==end)
      {
       cout<<a[i]<<endl;
      }
  }
 }
 return 0;
}
