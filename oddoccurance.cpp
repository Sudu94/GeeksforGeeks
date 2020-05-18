#include <iostream>
#include<algorithm>
using namespace std;

int main() {
   int n,t,count;
   cin>>t;
   while(t--)
   {
       cin>>n;
       long int a[n];
         sort(a,a+n);
       for(int i=0;i<n;i++)
       cin>>a[i];
       
       for(int i=0;i<n;i++)
       {
        count=0;
        for(int j=0;j<n;j++)
         {
           if(a[i]==a[j])
             count++;
          }
          if(count%2!=0)
          {
           cout<<a[i]<<endl;
           break;
          }
         
       }
      }
	return 0;
}
