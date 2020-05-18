#include<iostream>
using namespace std;
int main()
{
  int n,p,loc,loc1,c,a[10],d;
  cin>>n>>p;
  for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
   
    swap(a[p-1],a[n-p]);
    for(int i=0;i<n;i++)
      {
           cout<<a[i];
        }
  return 0;
}
