#include<iostream>
using namespace std;
int main()
{
 int n,rev=0,l,num,p,s;
 cin>>n;
 long int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 for(int i=0;i<n;i++)
 {
  p=a[i];
  s=a[i];
  while(p!=0)
  {
   num=p%10;
   rev=rev*10+num;
   p=p/10;
   }
 }
    if(s==rev)
   {
    cout<<"1";
   }
   else
    cout<<"0"; 
  
return 0;
}
