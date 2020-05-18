#include<iostream>
using namespace std;
int main()
{
 int n,p,t,temp,i;
 cin>>t;
 while(t--)
 {
  cin>>n>>p;
  int a[n][p];
 
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<p;j++)
      cin>>a[i][j];
   }
  for(int i=0;i<n;i++)
  {
   temp=a[i][0];
   a[i][0]=a[i][p-1];
   a[i][p-1]=temp;
  for(int j=0;j<p;j++)
   {
    cout<<a[i][j]<<" ";
    }
   cout<<endl;
  }
 // for(int i=0;i<n;i++)
 // {
 //  for(int j=0;j<p;j++)
      
 //  cout<<endl;
  // }
   
 }
 return 0;
}
