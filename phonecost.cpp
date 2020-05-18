#include<iostream>
using namespace std;
int main()
 {
   int n,p,a[100],loc=0,small;
  cin>>p;
  while(p--)
  {
  cin>>n;
  for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
   small=a[1];
   
  for(int i=1;i<n;i++)
   {
    
   if(a[i]<small)
   {
     
    small=a[i];
    
    }
  
   }
    
  cout<<small;
 }
   return 0;
}
