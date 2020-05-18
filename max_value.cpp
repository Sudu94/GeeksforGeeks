#include<iostream>
using namespace std;
int main()
{
  int n,m,a[10],b[10],k[10];
  cin>>n>>m;
   int arr[n+1];
   for(int i=0;i<m;i++)
    {
      cin>>a[i];
      cin>>b[i];
      cin>>k[i];
     }
     
     for(int i=0;i<m;i++)
     {
       int lower=a[i];
       int upper=b[i];
       
     arr[lower]+=k[i];
     arr[upper+1]-=k[i];
     
    }
     long long int sum=0,res = INT8_MIN;
      for(int i=0;i<n;i++)
        {
         sum+=arr[i];
         res = max(res, sum); 
          
        } 
        cout<<res;
    
      return 0;

}
