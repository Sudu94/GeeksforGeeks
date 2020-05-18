#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int n,t,rev,rev1,l,l1;
 cin>>t;
 while(t--)
 {
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 sort(a,a+n);
 rev=0;
 rev1=0;
 for(int i=0;i<n;i++)
 {
   if(i%2==0)
   {
   l=a[i];
   rev=rev*10+l;
   
   }
   else
   {
   l1=a[i];
   rev1=rev1*10+l1;
   }
}
 cout<<rev+rev1<<endl;
}
return 0;
}
