#include<iostream>
using namespace std;
int main()
{
 int a[50],count,n,c,digit,ans,res;
 cin>>n;
  for(int i=0;i<n;i++)
   {
     
     cin>>a[i];
    }
  count=0;
  res=0;
  cin>>c;
   for(int i=0;i<n;i++)
     { 
      ans=a[i];
      digit=ans%10;
      ans=ans/10;
       if(c==digit)
        {
         count++;
         
         }
      else if(c==ans)
        {
         res++;     
        }
      
       }
    cout<<count+res+1;
    return 0;
}
