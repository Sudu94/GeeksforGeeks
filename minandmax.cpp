#include<iostream>
using namespace std;
int main()
 {
   long int n,min,max,p;
    long long int a[10^12];
    cin>>p;
   while(p--)
   {
   cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
   }
  min=a[0];
  max=a[0];
   for(int i=1;i<n;i++)
    {
     if(a[i]<min)
      {
        min=a[i];
       }
      if(a[i]>max)
      {
       max=a[i];
      }
     }
 
  cout<<min<<" "<<max<<endl;
 }
 return 0;
}
