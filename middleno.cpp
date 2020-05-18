#include<iostream>
using namespace std;
int main()
{                                   
 int a,b,c,n;
 cin>>n;                           
 for(int i=0;i<n;i++)
 {
   cin>>a>>b>>c;
   if(a>b && a<c || a<b && a>c )
    cout<<a<<endl;
   else if(a<b && b<c ||a>b && b>c)
    cout<<b<<endl;
   else 
     cout<<c<<endl;
 }
 return 0;
 }
