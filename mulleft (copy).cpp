#include<iostream>
using namespace std;
int main()
{
 int a[50],n,sum1,sum2,ans,p,i,j;
  
  cin>>p;
  while(p--)
  {
  cin>>n;
  for( i=0;i<n;i++)
   {
    cin>>a[i];
    }
    
     ans=n/2;
      
    sum1=0;
    for( i=0;i<ans;i++)
     {
      sum1=sum1+a[i];
      
      
      sum2=0;
     for( j=ans;j<n;j++)
      
        sum2=sum2+a[j];
       
     }
   
     cout<<sum1*sum2<<endl;
     
   }              
return 0;
}
