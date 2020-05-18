#include<iostream>
using namespace std;
int main()
{
 int n,sum,t,i,j,k;
  cin>>t;
  while(t--)
 {
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
                                  
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
  {
    if(a[i]==a[j])
      {
       
   for(int k=j;k<n;k++)
     {
       a[k]=a[k+1];
     }
      n--;
      j--;
        }
       
    }
 }
   sum=0;
  for(i=0;i<n;i++)
  {
   sum+=a[i]<<endl;
  }
}
  return 0;
} 
