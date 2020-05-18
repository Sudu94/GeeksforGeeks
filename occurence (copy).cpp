#include<iostream>
using namespace std;
int main()
{
  int n,a[20],b,count=0,loc,t,sum;
  cin>>t;
  while(t--)
  {
  cin>>n>>b;
  for(int i=0;i<n;i++)
   {
   cin>>a[i];
    }

   
   for(int i=0;i<n;i++)
    {
     
    loc=a[i];
     if(a[i]==b)
       {
       count=count+1;
       
        }
     
     
     }
      if(count>0)
      {
        cout<<count<<endl;
      
         }
      break;
      if(loc!=b)
       {
     
       cout<<"-1"<<endl;
      
      }
     
       
      
}
  return 0;
}
