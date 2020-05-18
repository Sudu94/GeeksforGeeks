#include<iostream>
using namespace std;
int main()
{
  int a[10],count,n,p,count1;
  cin>>n>>p;
  for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   count=0;
   count1=0;
  for(int i=0;i<n;i++)
  {
     if(a[i]>=p)
      {
        count++;
       }
     else if(a[i]<=p)
       {
         count1++;
        }
       else
        {
          count1++;
         }
   }
    cout<<count1<<" "<<count;
      return 0;
}
