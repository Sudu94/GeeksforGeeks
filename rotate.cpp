#include<iostream>
using namespace std;
int main()
{
  int a,b,i,j,arr[50],s,p;
  cin>>p;
  while(p--)
  {
  cin>>a>>b;
  for(i=0;i<a;i++)
   {
    cin>>arr[i];
     }
    for(i=b;i<a;i++)
    {
    
    cout<<arr[i]<<" ";
   }
   for(j=0;j<b;j++)
   
    {  
    cout<<arr[j]<<" ";
     } 
       cout<<endl; 
   }  
    
      
  return 0;
}
     
