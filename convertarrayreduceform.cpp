#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
   cin>>n;
   int a[n];
   int temp[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
 // copy from array a to temp array
 memcpy(temp, a, n*sizeof(int)); 
 //sort the temp array
 sort(temp,temp+n);
 //create a hash table m
 unordered_map<int,int >m;
 int val=0;      //take a vaibale for increment o to n-1
 for(int i=0;i<n;i++)
   m[temp[i]]=val++; //strore 0 to n-1 hash table

 for(int i=0;i<n;i++)
  a[i]=m[a[i]];     //convert array by taking postion from m

for(int i=0;i<n;i++)
 cout<<a[i]<<" ";    // print all that value
  }
return 0;
}
