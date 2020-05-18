#include <iostream>
using namespace std;

int main() {
   int n,p,a[100],sum;
   cin>>p;
   while(p--)
   {
       
       cin>>n;
       sum=0;
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
         }
        for(int i=0;i<n;i++)
        {
         sum=sum+a[i];  
       }
        cout<<sum<<endl;
        
   }
	return 0;
}
