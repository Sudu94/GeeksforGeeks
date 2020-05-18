#include <iostream>
using namespace std;

int main() {
  int t,n,max;
   cin>>t;
   while(t--)
   {
       cin>>n;
      long int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
       max=0;
       for(int i=0;i<n;i++)
       {
         
           if(a[i]>max)
           {
               max=a[i];
           }
       }
       cout<<max<<endl;
   }
	return 0;
}
