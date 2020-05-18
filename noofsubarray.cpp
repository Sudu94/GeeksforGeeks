#include<iostream>
using namespace std;
int main()
{
  int t,n,sum,count,l;
  cin>>t;
  while(t--)
  {
    cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
       cin>>a[i];
    
    count=0;
     for(int i=0;i<n;i++)
     {
       sum=0;    
       for(int j=i;j<n;j++)
        {
          sum=sum+a[j];
           if(sum%2==0)
           count++;
         }
        
      }
      cout<<count<<endl;
    }
  return 0;
 }
