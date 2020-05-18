#include<iostream>
using namespace std;
int main()
{
 int n,sum,p=0,loc,s;
  int a[20];
 cin>>n;
for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }

  for(int i=0;i<n;i++)
  {
     loc=a[i];
       if(loc<1 || loc!=1)
        {
         p++; 
         }
     s=p;
 }
  if(loc!=1)
       {
        cout<<"-1";
       }
 cout<<s;
 
 
 return 0;
}
