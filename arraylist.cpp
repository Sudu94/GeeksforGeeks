#include<iostream>
using namespace std;
int main()
{
  char a[20];
   int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    if(a[i]==i)
    {
     cin>>a[i];
   }
     }   
   for(int i=0;i<n;i++)
   {
    cout<<a[i];
   }
 return 0;
}
