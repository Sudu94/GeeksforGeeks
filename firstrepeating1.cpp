#include<iostream>
using namespace std;


int repeat(int a[],int n)
{
  int loc; 
 for(int i=0;i<n;i++)
 {

   for(int j=i+1;j<n;j++)
   {
      if(a[i]==a[j])
       {
        return i+1;
        }
     }
   
   }
   return -1;
 }
int main()
{
  int t,n,start,end;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
  int s;
   s= repeat(a,n);
  cout<<s<<endl;
  }
 return 0;
}
